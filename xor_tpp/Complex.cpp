#include "Complex.h"

using std::ostream;

// Default values are real = 0, imaginary = 0
// Left blank intentionally
Complex::Complex(double real, double imaginary) : m_real{real}, m_imaginary{imaginary} {}

double Complex::getReal() {
    return m_real;
}

double Complex::getImaginary() {
    return m_imaginary;
}

void Complex::setReal(double real) {
    m_real = real;
}

void Complex::setImaginary(double imaginary) {
    m_imaginary = imaginary;
}

bool Complex::operator==(Complex const& other) const  {
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