#include "Complex.h"

double Complex::real() {
    return m_real;
}

double Complex::imaginary() {
    return m_imaginary;
}

void Complex::setReaL(double real) {
    m_real = real;
}

void Complex::setImaginary(double imaginary) {
    m_imaginary = imaginary;
}

bool Complex::operator==(Complex const &other) {
    return this->m_real == other.m_real and this->m_imaginary == other.m_imaginary;
}

Complex Complex::operator+(Complex const &other) {
    return Complex(this->m_real + other.m_real, this->m_imaginary + other.m_imaginary);
}

Complex Complex::operator-(Complex const &other) {
    return Complex(this->m_real - other.m_real, this->m_imaginary - other.m_imaginary);
}

Complex Complex::operator*(Complex const &other) {
    return Complex(this->m_real * other.m_real - this->m_imaginary * other.m_imaginary,
                   this->m_real * other.m_imaginary + this->m_imaginary * other.m_real);
}

std::ostream &operator<<(std::ostream &os, const Complex &obj) {
    os << "(" << obj.m_real << "+" << obj.m_imaginary << "i)";

    return os;
}