#pragma once
#include <stdexcept>

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

class CalculatorException : public std::exception {
    const char *msg;

  public:
    CalculatorException(const char *m) : msg(m) {
    }
    const char *what() const noexcept override {
        return msg;
    }
};

#define DEFINE_EXCEPTION(name, message)                                                                                \
    class name : public CalculatorException {                                                                          \
      public:                                                                                                          \
        name() : CalculatorException(message) {}                                                                       \
    };

DEFINE_EXCEPTION(ZeroDivisionException, "Encountered zero division")
DEFINE_EXCEPTION(UnknownOperatorException, "Encountered unknown operator")