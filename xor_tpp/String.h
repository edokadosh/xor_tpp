#pragma once
#include <iostream>

namespace string {

class String {
  public:
    explicit String(const char* str);
    virtual ~String();
    String(const String& other);
    String(String&& other) noexcept;
    String& operator=(const String& other);
    String& operator=(String&& other) noexcept;

    size_t length() const;
    void clear();
    char& operator[](size_t idx);
    char operator[](size_t idx) const;
    const char* c_str() const;

    friend std::ostream& operator<<(std::ostream& os, const String& obj);

  private:
    char* m_chars;
    void checkIndex(size_t idx) const;
};

} // namespace string
