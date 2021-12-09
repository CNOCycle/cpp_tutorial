#include <iostream>

int main()
{
    enum season {spring = 20, summer, fall = 0, winter};

    season a = static_cast<season>(20);
    season b = static_cast<season>(0);
    int c = static_cast<int>(a);
    int d = static_cast<int>(b);

    std::cout << (a == season::spring) << "\n";
    std::cout << (b == season::fall) << "\n";
    std::cout << c << "\n";
    std::cout << d << "\n";

    return 0;
}