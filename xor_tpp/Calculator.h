#pragma once
#include <stdexcept>

namespace calculator {

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

class CalculatorException : public std::exception {};

#define DEFINE_CALCULATOR_EXCEPTION(name)                                                                              \
    class name : public CalculatorException {                                                                          \
      public:                                                                                                          \
        const char *what() const noexcept override { return "Encountered " #name; }                                    \
    };

DEFINE_CALCULATOR_EXCEPTION(ZeroDivisionException)
DEFINE_CALCULATOR_EXCEPTION(UnknownOperatorException)

} // namespace calculator
