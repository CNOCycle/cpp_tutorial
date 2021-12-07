#include <iostream>
#include <string>

int main()
{
    char c;
    std::string s;
    std::cout << "read a sentence[y/n]";
    std::cin >> c;
    std::cout << "next int(char) = " << int(std::cin.peek()) << "\n";
    std::cout << s.size() << "\n";

    return 0;
}