#include "Complex.h"

bool Complex::operator==(Complex const &other) {
    return this->real == other.real and this->imaginary == other.imaginary;
}

Complex Complex::operator+(Complex const &other) {
    return Complex(this->real + other.real, this->imaginary + other.imaginary);
}

Complex Complex::operator-(Complex const &other) {
    return Complex(this->real - other.real, this->imaginary - other.imaginary);
}

Complex Complex::operator*(Complex const &other) {
    return Complex(this->real * other.real - this->imaginary * other.imaginary,
                   this->real * other.imaginary + this->imaginary * other.real);
}

std::ostream &operator<<(std::ostream &os, const Complex &obj) {
    os << "(" << obj.real << "+" << obj.imaginary << "i)";

    return os;
}