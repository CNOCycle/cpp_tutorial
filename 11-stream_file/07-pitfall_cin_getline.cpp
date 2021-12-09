#include <iostream>
#include <string>

/***
 *  > g++ cpp_tutorial/11-stream_file/07-pitfall_cin_getline.cpp && ./a.out
 *  read a sentence[y/n]: y
 *  next int(char) = 10
 *  0
 *  > g++ -D FIX cpp_tutorial/11-stream_file/07-pitfall_cin_getline.cpp && ./a.out
 *  read a sentence[y/n]: y
 *  hello world
 *  11
***/

int main()
{
    char c;
    std::string s;
    std::cout << "read a sentence[y/n]: ";
    std::cin >> c;
#ifndef FIX
    std::cout << "next int(char) = " << int(std::cin.peek()) << "\n";
#else
    std::cin.get();
#endif
    std::getline(std::cin, s);
    std::cout << s.size() << "\n";

    return 0;
}