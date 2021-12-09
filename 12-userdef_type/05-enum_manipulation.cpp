#include <iostream>

int main()
{
    enum season {spring = 20, summer, fall = 0, winter};

    season a = static_cast<season>(20);
    season b = static_cast<season>(0);
    // illegal: season = season + int
    //season c = a + 1;
    // legal: int = int + int
    int d = static_cast<int>(a) + 2;

    season e = static_cast<season>(d);
    std::cout << (e == season::spring) << "\n";
    std::cout << (e == season::summer) << "\n";
    std::cout << (e == season::fall) << "\n";
    std::cout << (e == season::winter) << "\n";
    std::cout << static_cast<int>(e) << "\n";

    return 0;
}