#pragma once
#include <iostream>

class Complex {
  public:
    explicit Complex(double real = 0, double imaginary = 0);

    double getReal() const;
    double getImaginary() const;
    void setReal(const double real);
    void setImaginary(const double imaginary);

    bool operator==(Complex const &other) const ;
    Complex operator+(Complex const &other) const ;
    Complex operator-(Complex const &other) const ;
    Complex operator*(Complex const &other) const;

    friend std::ostream &operator<<(std::ostream &os, const Complex &obj);

  private:
    double m_real;
    double m_imaginary;
};
