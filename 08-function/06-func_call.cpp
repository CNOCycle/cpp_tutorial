#include <iostream>

void f1(int a = 3);

int main()
{
    int c = 100;
    f1();
    f1(c);
    return 0;
}

void f1(int b)
{
    std::cout << b << "\n";
    std::cout << __func__ << "\n";
}
