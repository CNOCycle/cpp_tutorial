#include <iostream>
#include <stdarg.h>

// variadic function with default arguments
void f1(double, int =3, ...);

int main()
{
    // skipping default argument may cause ambiguous function call
    f1(5.0, 2.0, 4.0, 6.0);
    return 0;
}

void f1(double m, int n, ...)
{
    double sum = 0.0;

    va_list args;
    va_start(args, n);
    for(int ii = 0; ii < n; ii = ii + 1)
    {
        sum = sum + va_arg(args, double);
    }
    sum = sum * 5;
    std::cout << sum << "\n";
}