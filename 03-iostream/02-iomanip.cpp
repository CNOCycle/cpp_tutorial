#include <iostream>
#include <iomanip>

int main()
{

    int a = 555;

    // std::setw
    std::cout << "|12345|\n";
    std::cout << "|" << std::setw(2) << a << "|"<< std::endl;
    std::cout << "|" << std::setw(3) << a << "|"<< std::endl;
    std::cout << "|" << std::setw(4) << a << "|"<< std::endl;
    std::cout << "|" << std::setw(5) << a << "|"<< std::endl;
    std::cout << "|" << a << "|" << std::endl;
    std::cout << "-----\n";

    // left or right align
    std::cout << "|12345|\n";
    char prev = std::cout.fill('0');
    std::cout << "|" << std::right << std::setw(4) << a << "|" << std::endl;
    std::cout << "|" << std::left  << std::setw(4) << a << "|" << std::endl;
    std::cout << "|" << std::setw(4) << a << "|" << std::endl;
    std::cout.fill(prev);
    std::cout << "|" << std::setw(4) << a << "|" << std::endl;
    std::cout << "-----\n";

    // setprecision
    double b = 15.12;
    std::cout << std::setprecision(3) << b << std::endl;
    std::cout << std::setprecision(4) << b << std::endl;
    std::cout << std::setprecision(5) << b << std::endl;
    std::cout << std::scientific << b << std::endl;
    std::cout << std::fixed << b << std::endl;

    return 0;

}