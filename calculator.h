#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <cmath>

class Calculator
{
public:
    double Add(double, double);	// Функція для обчислення суми
    double Sub(double, double);	// Функція для обчислення віднімання
    double Mul(double, double);	// Функція для обчислення множення
    double Div(double, double);	// Функція для обчислення ділення
    double Sqrt(double); 	// Функція для обчислення кореня а
    double Pow(double, double); // Функція для обчислення степеня
};

#endif // CALCULATOR_H

