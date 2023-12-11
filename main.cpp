#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    double a, b;

    std::cout << "Enter number a: ";
    std::cin >> a;

    std::cout << "Enter number b: ";
    std::cin >> b;

    std::cout << "Addition: " << calc.Add(a, b) << std::endl;
    std::cout << "Subtraction: " << calc.Sub(a, b) << std::endl;
    std::cout << "Multiplication: " << calc.Mul(a, b) << std::endl;
    std::cout << "Division: " << calc.Div(a, b) << std::endl;
    std::cout << "Square root of a: " << calc.Sqrt(a) << std::endl;
    std::cout << "a to the power of b: " << calc.Pow(a, b) << std::endl;

    return 0;
}
