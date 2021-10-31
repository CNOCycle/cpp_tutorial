#include <iostream>
#include <string>
#include <vector>

int main()
{

    // out of range - c-array
    int a[] = {-0, -1, -2, -3, -4, -5};
    std::cout << a[-1] << "\n";
    std::cout << a[8] << "\n";

    // out of range - vector
    std::vector<int> b = {-0, -1, -2, -3, -4, -5};
    std::cout << b[-1] << "\n";
    std::cout << b[8] << "\n";
    std::cout << "-----\n";
    //std::cout << b.at(-1) << "\n";
    //std::cout << b.at(8) << "\n";

    std::string c = "c++ string";
    std::cout << c[-1] << "\n";
    std::cout << c[100] << "\n";
    std::cout << "-----\n";
    std::cout << c.at(100) << "\n";
    std::cout << c.at(-1) << "\n";

}