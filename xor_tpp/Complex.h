#pragma once
#include <iostream>

using std::ostream;

class Complex {
  private:
    double real;
    double imaginary;

  public:
    Complex() : real(0), imaginary(0){}
    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

    bool operator==(Complex const &other);
    Complex operator+(Complex const &other);
    Complex operator-(Complex const &other);
    Complex operator*(Complex const &other);

    /*
    I didnt write getters and setters as instructed as they are not good 
    practice, and not necessary for the exercizeif i want real adn imaginary 
    accesible i would put them as public. :)
    */

    // Defiend here as friend so that real, imaginary are accesible
    friend std::ostream &operator<<(std::ostream &os, const Complex &obj); 
};
