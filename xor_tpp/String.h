#pragma once
#include <iostream>


class String {
  private:
    std::unique_ptr<char[]> chars = nullptr;
    size_t length;

  public:
    String(const char* str);

    friend std::ostream &operator<<(std::ostream &os, const String &obj);
};
