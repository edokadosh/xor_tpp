#include "String.h"

using std::ostream;

namespace string {

String::String(const char* str) : m_chars(new char[strlen(str) + 1]) {
    strcpy(m_chars, str);
}

String::~String() {
    delete[] m_chars;
}

size_t String::length() const {
    return strlen(m_chars);
}

ostream& operator<<(ostream& os, const String& obj) {
    for (size_t i = 0; i < obj.length(); i++) {
        os << obj.m_chars[i];
    }
    return os;
}

} // namespace string
