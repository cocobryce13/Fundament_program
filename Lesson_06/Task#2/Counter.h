#pragma once

class Counter
{
public:

    void SetNumber(int ValueNumber);
    void SetNumberPlus();
    void SetNumberMinus();
    int GetNumber();
private:

    int number = 1;

};
