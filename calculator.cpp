#include "calculator.h"

double Calculator::Add(double a, double b) {
    return a + b;
}

double Calculator::Sub(double a, double b) {
    return a - b;
}

double Calculator::Mul(double a, double b) {
    return a * b;
}

double Calculator::Div(double a, double b) {
    return a / b;
}

// Обчислення квадратного кореня
double Calculator::Sqrt(double a) {
    return sqrt(a); 
}

// Обчислення степеня
double Calculator::Pow(double a, double b) {
    return pow(a, b);
}

