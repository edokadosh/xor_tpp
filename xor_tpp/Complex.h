#pragma once
#include <iostream>

using std::ostream;

class Complex {
  public:
    Complex() = default;
    Complex(double real, double imaginary);

    double real();
    double imaginary();
    void setReal(double real);
    void setImaginary(double imaginary);

    bool operator==(Complex const &other);
    Complex operator+(Complex const &other);
    Complex operator-(Complex const &other);
    Complex operator*(Complex const &other);

    // Defiend here as friend so that real, imaginary are accesible
    friend std::ostream &operator<<(std::ostream &os, const Complex &obj);

  private:
    double m_real = 0;
    double m_imaginary = 0;
};
