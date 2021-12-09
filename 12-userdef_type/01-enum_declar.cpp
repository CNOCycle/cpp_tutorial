#include <iostream>

int main()
{
    enum Color { red, green, blue };
    enum season {spring = 20, summer, fall = 0, winter};

    std::cout << "color\n";
    std::cout << Color::red << "\n";
    std::cout << Color::green << "\n";
    std::cout << Color::blue << "\n";

    std::cout << "season\n";
    std::cout << season::spring << "\n";
    std::cout << season::summer << "\n";
    std::cout << season::fall << "\n";
    std::cout << season::winter << "\n";

    return 0;
}