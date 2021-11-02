#include <iostream>
#include <cmath>

void f1()
{
    std::cout << __func__ << "\n";
}

void f2(void)
{
    std::cout << __func__ << "\n";
}

void f3(double a)
{
    std::cout << a << "\n";
    std::cout << __func__ << "\n";
}

void f4(double a, int b)
{
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << __func__ << "\n";
}

double f5(double a, double b, int c = 2, int d = 2)
{
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << d << "\n";
    double e = std::pow(a, c) + std::pow(b, d);
    std::cout << e << "\n";
    std::cout << __func__ << "\n";
    return e;
}

int main()
{
    // no arugment
    f1();
    f2();

    // require one argument
    //f3();
    f3(3.0);

    // requre two or more arguments
    int a = 5;
    f4(3.0, a);

    // default arguments
    std::cout << f5(3, 2, 1, 4) << "\n";
    std::cout << f5(3, 2, 1) << "\n";
    std::cout << f5(3, 2) << "\n";

    return 0;
}