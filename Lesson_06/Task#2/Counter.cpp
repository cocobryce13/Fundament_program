#include "Counter.h"

int ValueNumber;
int number;

void Counter::SetNumber(int number)
{
    number = ValueNumber;
}

void Counter::SetNumberPlus()
{
    ++number;
}

void Counter::SetNumberMinus()
{
    --number;
}

int Counter::GetNumber()
{
    return number;
}
