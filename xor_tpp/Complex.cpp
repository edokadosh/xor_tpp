#include "Complex.h"

using std::ostream;

Complex::Complex(double real /* = 0 */, double imaginary /* = 0 */) : m_real{real}, m_imaginary{imaginary} {
    // Left blank intentionally
}

double Complex::getReal() const {
    return m_real;
}

double Complex::getImaginary() const {
    return m_imaginary;
}

void Complex::setReal(const double real) {
    m_real = real;
}

void Complex::setImaginary(const double imaginary) {
    m_imaginary = imaginary;
}

bool Complex::operator==(Complex const& other) const {
    return this->m_real == other.m_real and this->m_imaginary == other.m_imaginary;
}

Complex Complex::operator+(Complex const& other) const {
    return Complex(this->m_real + other.m_real, this->m_imaginary + other.m_imaginary);
}

Complex Complex::operator-(Complex const& other) const {
    return Complex(this->m_real - other.m_real, this->m_imaginary - other.m_imaginary);
}

Complex Complex::operator*(Complex const& other) const {
    return Complex(this->m_real * other.m_real - this->m_imaginary * other.m_imaginary,
                   this->m_real * other.m_imaginary + this->m_imaginary * other.m_real);
}

ostream& operator<<(ostream& os, const Complex& obj) {
    os << "(" << obj.m_real << "+" << obj.m_imaginary << "i)";

    return os;
}