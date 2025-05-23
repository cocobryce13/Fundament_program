#include <iostream>
#include <string>
#include "Counter.h"
#include <windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string check;
    char commands;
    int number = 1;


    Counter base;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: " << std::endl;
    std::cin >> check;

    if (check == "да")
    {
        std::cout << "Введите начальное значение счётчика: " << std::endl;
        std::cin >> number;

        base.SetNumber(number);
    }

    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): " << std::endl;
        std::cin >> commands;

        if (commands == '+')
        {
            base.SetNumberPlus();
        }
        else if (commands == '-')
        {
            base.SetNumberMinus();
        }
        else if (commands == '=')
        {
            std::cout << "Текущее значение счётчика: " << base.GetNumber() << std::endl;
        }

    } while (commands != 'x');

    std::cout << "До свидания!" << std::endl;

    return 0;
}
