/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_DBSTRING_H
#define LCF_DBSTRING_H
#include <utility>
#include <string>
#include <iterator>
#include <cstdint>
#include <cstring>
#include <limits>
#include <algorithm>
#include <ostream>

#include "lcf/string_view.h"

namespace lcf {

// A custom string class optimized for database storage.
// This string type is good for storing and retrieving values.
// It is not good for string manipulation like insertion or concatenation.
class DBString {
	public:
		using value_type = char;
		using size_type = uint32_t;

		using char_type = value_type; // <- FIXME: HACK to workaround bug in older versions of fmtlib for Player: https://github.com/fmtlib/fmt/issues/1539
		using traits_type = std::char_traits<char>;

		using iterator = char*;
		using const_iterator = const char*;
		using reverse_iterator = std::reverse_iterator<iterator>;
		using const_reverse_iterator = std::reverse_iterator<const_iterator>;

		static constexpr size_type npos = size_type(-1);

		constexpr DBString() = default;
		explicit DBString(StringView s);
		explicit DBString(const std::string& s) : DBString(StringView(s)) {}

		// Explicit construct for general const char*
		explicit DBString(const char* s) : DBString(StringView(s)) {}
		// Implicit constructor to capture string literals
		template <size_t N>
			DBString(const char(&literal)[N]) : DBString(StringView(literal)) {}
		DBString(const char* s, size_t len) : DBString(StringView(s, len)) {}

		DBString(const DBString& o) : DBString(StringView(o)) {}
		DBString(DBString&& o) noexcept { swap(o); }

		DBString& operator=(const DBString&);
		DBString& operator=(DBString&&) noexcept;

		void swap(DBString& o) noexcept {
			std::swap(_storage, o._storage);
		}

		~DBString() { _reset(); }

		explicit operator std::string() const { return std::string(data(), size()); }
		operator StringView() const { return StringView(data(), size()); }

		char& operator[](size_type i) { return data()[i]; }
		char operator[](size_type i) const { return data()[i]; }

		char& front() { return (*this)[0]; }
		char front() const { return (*this)[0]; }

		char& back() { return (*this)[size()-1]; }
		char back() const { return (*this)[size()-1]; }

		char* data() { return _storage; }
		const char* data() const { return _storage; }

		const char* c_str() const { return data(); }

		iterator begin() { return data(); }
		iterator end() { return data() + size(); }

		const_iterator begin() const { return data(); }
		const_iterator end() const { return data() + size(); }

		const_iterator cbegin() const { return begin(); }
		const_iterator cend() const { return end(); }

		reverse_iterator rbegin() { return reverse_iterator(end()); }
		reverse_iterator rend() { return reverse_iterator(begin()); }

		const_reverse_iterator rbegin() const { return const_reverse_iterator(end()); }
		const_reverse_iterator rend() const { return const_reverse_iterator(begin()); }

		const_reverse_iterator crbegin() const { return rbegin(); }
		const_reverse_iterator crend() const { return rend(); }

		bool empty() const { return size() == 0; }
		size_type size() const;

		static constexpr char* empty_str() {
			return const_cast<char*>(_empty_str + sizeof(size_type));
		}
	private:
		void _reset() noexcept;
	private:
		alignas(size_type) static constexpr char _empty_str[sizeof(size_type)] = {};
		char* _storage = empty_str();
};

// This should be used over the conversion operator, so we can track all dbstr -> str instances
inline std::string ToString(const DBString& s) {
	return std::string(s);
}

#define LCF_DBSTRING_MAKE_CMP_OPS(LTYPE, RTYPE) \
inline bool operator==(LTYPE l, RTYPE r) { return StringView(l) == StringView(r); }\
inline bool operator!=(LTYPE l, RTYPE r) { return StringView(l) != StringView(r); }\
inline bool operator<(LTYPE l, RTYPE r) { return StringView(l) < StringView(r); }\
inline bool operator>(LTYPE l, RTYPE r) { return StringView(l) > StringView(r); }\
inline bool operator<=(LTYPE l, RTYPE r) { return StringView(l) <= StringView(r); }\
inline bool operator>=(LTYPE l, RTYPE r) { return StringView(l) >= StringView(r); }\

LCF_DBSTRING_MAKE_CMP_OPS(const DBString&, const DBString&);
LCF_DBSTRING_MAKE_CMP_OPS(StringView, const DBString&);
LCF_DBSTRING_MAKE_CMP_OPS(const DBString&, StringView);
LCF_DBSTRING_MAKE_CMP_OPS(const char*, const DBString&);
LCF_DBSTRING_MAKE_CMP_OPS(const DBString&, const char*);

inline std::ostream& operator<<(std::ostream& os, const DBString& s) {
	os << StringView(s);
	return os;
}

} // namespace lcf

namespace std {

template <> struct hash<lcf::DBString> {
	size_t operator()(const lcf::DBString& s) const {
		return std::hash<lcf::StringView>()(lcf::StringView(s));
	}
};

} // namespace std

namespace lcf {

inline DBString& DBString::operator=(DBString&& o) noexcept {
	if (this != &o) {
		if (!empty()) {
			_reset();
		}
		_storage = o._storage;
		o._storage = empty_str();
	}
	return *this;
}

inline DBString::size_type DBString::size() const {
	return *(reinterpret_cast<const size_type*>(_storage) - 1);
}

} // namespace lcf

#endif
