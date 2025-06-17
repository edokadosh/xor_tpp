#pragma once
class Complex {
  private:
    double real;
    double imaginary;

  public:
    Complex operator+(Complex const &other);
    Complex operator-(Complex const &other);
    Complex operator*(Complex const &other);
};
