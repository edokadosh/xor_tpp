#pragma once
#include <string>

class Calculator {
  public:
    double add(double num1, double num2); 
    double substract(double num1, double num2);
    double multiply(double num1, double num2);
    double divide(double num1, double num2);
    double calculate(double num1, char op, double num2);
};


// I put the defenitions to the what function in the header file because they
// are short and i dont mind them being inline
class ZeroDivisionException : public std::exception {
  public:
    const char *what() const override {
        return "Encountered zero division";
    }
};

class UnknownOperatorException : public std::exception {
  public:
    const char *what() const override {
        return "Encountered unknown operator";
    }
};