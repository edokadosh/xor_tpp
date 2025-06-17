#include "String.h"


String::String(const char *str) {
    chars = std::make_unique<char[]>(strlen(str));
    //TODO
}
