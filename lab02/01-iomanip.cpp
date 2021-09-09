#include <iostream>
#include <iomanip>

int main()
{
    // setprecision
    double b = 15.12;
    std::cout << std::scientific << b << std::endl;
    std::cout << b << std::endl;
    std::cout << std::fixed << b << std::endl;
    return 0;

}