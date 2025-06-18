#include "Calculator.h"

namespace calculator {

void printErr(const char *what) {
    cerr << "Exception: " << what << endl;
}

double Calculator::add(double num1, double num2) {
    return num1 + num2;
}

double Calculator::substract(double num1, double num2) {
    return num1 - num2;
}

double Calculator::multiply(double num1, double num2) {
    return num1 * num2;
}

double Calculator::divide(double num1, double num2) {
    if (num2 == 0) {
        throw ZeroDivisionException();
    }
    return num1 / num2;
}

double Calculator::calculate(double num1, char op, double num2) {
    switch (op) {
    case '+': {
        return add(num1, num2);
    }
    case '-': {
        return substract(num1, num2);
    }
    case '*': {
        return multiply(num1, num2);
    }
    case '/': {
        return divide(num1, num2);
    }
    default: {
        throw UnknownOperatorException();
    }
    }
}

}

