// CalculatorTutorial.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    setlocale(LC_ALL, "Russian");
    cout << "Консольное приложение калькулятора" << endl << endl;
    cout << "Введите операцию, которую нужно выполнить: a+b | a-b | a*b | a/b"<< endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Деление на ноль не допустимо. " << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Результат: " << result << "\n" << endl;
    }

    return 0;
}
