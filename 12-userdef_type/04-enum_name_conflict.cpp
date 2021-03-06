#include <iostream>

int main()
{
    // orange is defined twice
    enum fruit { orange, apple };
    enum color { red, orange };
    fruit a = fruit::apple;
    color b = color::red;
    std::cout << static_cast<int>(a) << "\n";
    std::cout << static_cast<int>(b) << "\n";

    // ambiguous: fruit::orange or color::orange
    fruit c = orange;

    return 0;
}