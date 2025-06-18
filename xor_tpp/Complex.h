#pragma once
#include <iostream>

class Complex {
  public:
    Complex() = default;
    Complex(double real, double imaginary);

    double getReal();
    double getImaginary();
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
