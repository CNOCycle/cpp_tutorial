#include <iostream>

void f1(int);

int main()
{
    f1(3);
    return 0;
}

void f1(int b)
{
    std::cout << b << "\n";
    std::cout << __func__ << "\n";
    if(b == 0)
    {
        std::cout << "exit\n";
    }
    else
    {
        f1(b - 1);
    }
}
