#include <iostream>
int main()
{
    // ref: https://en.wikipedia.org/wiki/ASCII
    char char_1 = 'A';
    char char_2 = 'a';
    std::cout << "char(char_1) = " << char_1 << " ";
    std::cout << "int(char_1) = " << int(char_1) << "\n";
    std::cout << "char(char_2) = " << char_2 << " ";
    std::cout << "int(char_2) = " << int(char_2) << "\n";
    std::cout << (char_1 < char_2) << "\n";
    return 0;
}