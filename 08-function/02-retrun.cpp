#include <iostream>

void f1()
{
    std::cout << __func__ << "\n";
    // implied return;
}

void f2()
{
    std::cout << __func__ << "\n";
    // explicit return
    return;
}

void f3()
{
    std::cout << __func__ << "\n";
    return;
    std::cout << "statement will never be executed";
}

int f4()
{
    std::cout << __func__ << "\n";
    return 1;
}

double f5()
{
    std::cout << __func__ << "\n";
    return 1.2;
}

double f6()
{
    std::cout << __func__ << "\n";
    return f5();
}

int main()
{
    f1();
    f2();
    f3();
    int a = f4();
    double b = f5();
    double c = f6();
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    return 0;
}