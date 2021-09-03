#include <iostream>

int main()
{

    int a, b, c;
    std::cin >> a >> b >> c;
    // input example = "11\n12\n13" (enter)
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << std::endl;

    // input example = "11 12 13" (space)
    std::cout << "Please enter 3 numbers:";
    std::cin >> a >> b >> c;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << std::endl;

    return 0;

}