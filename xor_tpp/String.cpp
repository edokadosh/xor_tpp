#include "String.h"


String::String(const char *str) {
    length = strlen(str);
    chars = std::make_unique<char[]>(strlen(str)+1);
    unsigned index = 0;
    do {
        chars[index] = str[index];
    } while (str[index++]);
}


std::ostream &operator<<(std::ostream &os, const String &obj) {
    for (int i = 0; i < obj.length; i++) {
        os << obj.chars[i];
    }
    return os;
}
