#include <iostream>

int main()
{
    char a, b, c;

    std::cout << "cin.get example\n";
    std::cout << "input: ";
    std::cin.get(a);
    std::cin.get(b);
    std::cin.get(c);
    std::cout << "-------\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "c: " << c << "\n";

    return 0;
}