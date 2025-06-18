#include "String.h"

String::String(const char *str) {
    m_chars = make_unique<char[]>(strlen(str) + 1);
    size_t index = 0;
    do {
        m_chars[index] = str[index];
    } while (str[index++]);
}

size_t String::length() const {
    size_t len = 0;
    while (this->m_chars[len]) {
        len++;
    }

    return len;
}

ostream &operator<<(ostream &os, const String &obj) {
    for (size_t i = 0; i < obj.length(); i++) {
        os << obj.m_chars[i];
    }
    return os;
}
