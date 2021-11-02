#include <iostream>

// function declaration (prototype)
// it should appear before any calls
// default arguments should list in declaration
void f1();
void f2(int, double);
void f3(double, int = 2);

int main()
{
    f1();
    f2(1, 2);
    f3(0);
    f3(0, 4);

    return 0;
}

// function definition
void f1()
{
    std::cout << __func__ << "\n";
}

void f2(int a, double b)
{
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << __func__ << "\n";
}

void f3(double a, int b)
{
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << __func__ << "\n";
}