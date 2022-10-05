#include <iostream>

#include "types.h"
#include "operations.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    int x, y, op, result_int;
    double result_double;
    Operation oper;
    while (true) {        std::cout << "������� ������ ����� : ";

        std::cin >> x;
        std::cout << "������� ������ ����� : ";
        std::cin >> y;
        std::cout << "�������� ��������(1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������) : ";
        std::cin >> op;
        oper = static_cast<Operation>(op);
        switch (oper)
        {
        case Operation::add:
            result_int = addition(x, y);
            std::cout << x << " ��������� " << y << " = " << result_int;
            break;
        case Operation::subst:
            result_int = subtraction(x, y);
            std::cout << x << " ������ " << y << " = " << result_int;
            break;
        case Operation::mult:
            result_int = multiplication(x, y);
            std::cout << x << " �������� �� " << y << " = " << result_int;
            break;
        case Operation::divs:
            result_double = division(x, y);
            std::cout << x << " �������� �� " << y << " = " << result_double;
            break;
        case Operation::powr:
            result_int = power(x, y);
            std::cout << x << " � ������� " << y << " = " << result_int;
            break;
        default:
            break;
        }   
    std::cout << std::endl;
    }
}
