#include <iostream>

int main()
{
    enum season {spring = 20, summer, fall = 0, winter};

    season a = spring;
    season b = fall;

    std::cout << (a > b) << "\n";
    std::cout << (b == spring) << "\n";
    std::cout << (b == fall) << "\n";
    std::cout << (b == 0) << "\n";
    std::cout << (a == 0) << "\n";
    std::cout << (a == 20) << "\n";

    return 0;
}