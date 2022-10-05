#include <iostream>

#include "types.h"
#include "operations.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    int x, y, op, result_int;
    double result_double;
    Operation oper;
    while (true) {        std::cout << "Введите первое число : ";

        std::cin >> x;
        std::cout << "Введите второе число : ";
        std::cin >> y;
        std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
        std::cin >> op;
        oper = static_cast<Operation>(op);
        switch (oper)
        {
        case Operation::add:
            result_int = addition(x, y);
            std::cout << x << " прибавить " << y << " = " << result_int;
            break;
        case Operation::subst:
            result_int = subtraction(x, y);
            std::cout << x << " отнять " << y << " = " << result_int;
            break;
        case Operation::mult:
            result_int = multiplication(x, y);
            std::cout << x << " умножить на " << y << " = " << result_int;
            break;
        case Operation::divs:
            result_double = division(x, y);
            std::cout << x << " поделить на " << y << " = " << result_double;
            break;
        case Operation::powr:
            result_int = power(x, y);
            std::cout << x << " в степени " << y << " = " << result_int;
            break;
        default:
            break;
        }   
    std::cout << std::endl;
    }
}
