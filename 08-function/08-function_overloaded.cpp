#include <iostream>

//void f1(int, int);
void f1(int, double);
void f1(double, int);
void f1(double, double);


int main()
{
    int a = 0;
    int b = 1;
    f1(a, b);

    return 0;
}

void f1(int a, double b)
{
    std::cout << "i_d\n";
}
void f1(double a, int b)
{
    std::cout << "d_d\n";
}
void f1(double a, double b)
{
    std::cout << "d_d\n";
}