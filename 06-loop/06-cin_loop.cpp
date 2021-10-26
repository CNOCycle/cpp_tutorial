#include <iostream>

int main()
{
    // example: 1 (enter) 2 (enter) 3 (enter)
    // example: 1 2 3 (enter)
    // example: (ctrl+D)
    // example: (ctrl+C)
    char a;
    while(std::cin >> a)
    {
        std::cout << "char(a): " << a << std::endl;
        std::cout << "int(a):  " << int(a) << std::endl;
        std::cout << std::cin.fail() << std::endl;
    }
    std::cout << "------\n";
    std::cout << "char(a): " << a << std::endl;
    std::cout << "int(a):  " << int(a) << std::endl;
    std::cout << std::cin.fail() << std::endl;
    return 0;
}