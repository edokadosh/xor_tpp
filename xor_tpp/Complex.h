#pragma once
#include <iostream>

using std::ostream;

class Complex {
  public:
    Complex() : m_real(0), m_imaginary(0) {
    }
    Complex(double real, double imaginary) : m_real(real), m_imaginary(imaginary) {
    }

    double real();
    double imaginary();
    void setReaL(double real);
    void setImaginary(double imaginary);

    bool operator==(Complex const &other);
    Complex operator+(Complex const &other);
    Complex operator-(Complex const &other);
    Complex operator*(Complex const &other);

    // Defiend here as friend so that real, imaginary are accesible
    friend std::ostream &operator<<(std::ostream &os, const Complex &obj);

  private:
    double m_real;
    double m_imaginary;
};
