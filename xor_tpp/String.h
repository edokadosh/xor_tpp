#pragma once
#include <iostream>

namespace string {

class String {
  public:
    explicit String(const char* str);
    size_t length() const;

    friend std::ostream& operator<<(std::ostream& os, const String& obj);

  private:
    std::unique_ptr<char[]> m_chars;
};

} // namespace string
