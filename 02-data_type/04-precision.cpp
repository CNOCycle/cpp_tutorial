#include <iostream>

int main()
{
    {
        float a = 2.0;
        float b = 1e-1;
        float c = 1e-9;
        std::cout << (a + b - a) << std::endl;
        std::cout << (a - a + b) << std::endl;
        std::cout << (a + c - a) << std::endl;
        std::cout << (a - a + c) << std::endl;
    }
    std::cout << "-----------\n";
    {
        double a = 2.0;
        double b = 1e-9;
        double c = 1e-30;
        std::cout << (a + b - a) << std::endl;
        std::cout << (a - a + b) << std::endl;
        std::cout << (a + c - a) << std::endl;
        std::cout << (a - a + c) << std::endl;
    }

    return 0;
}