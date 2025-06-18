#pragma once
#include <iostream>

class Complex {
  public:
    Complex(double real = 0, double imaginary = 0);

    double getReal();
    double getImaginary();
    void setReal(double real);
    void setImaginary(double imaginary);

    bool operator==(Complex const &other) const ;
    Complex operator+(Complex const &other) const ;
    Complex operator-(Complex const &other) const ;
    Complex operator*(Complex const &other) const;

    friend std::ostream &operator<<(std::ostream &os, const Complex &obj);

  private:
    double m_real;
    double m_imaginary;
};
