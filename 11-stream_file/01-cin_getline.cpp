#include <iostream>

/***
 *  > g++ -D CIN cpp_tutorial/11-stream_file/01-cin_getline.cpp && ./a.out
 *  cin example
 *  123 456 789
 *  str: 123
 *  str: 456
 *  str: 789
 *  > g++ -D GETLINE_S cpp_tutorial/11-stream_file/01-cin_getline.cpp && ./a.out
 *  getline with whitespace
 *  123 456 789 
 *  str: 123
 *  str: 456
 *  str: 78
 *  > g++ -D GETLINE_N cpp_tutorial/11-stream_file/01-cin_getline.cpp && ./a.out
 *  getline with newline
 *  123 456 789 
 *  str: 123 456 789
***/

int main()
{
    std::string s;

#ifdef CIN
    std::cout << "cin example\n";
    while(std::cin >> s)
    {
        std::cout << "str: " << s << "\n";
    }
#endif

#ifdef GETLINE_S
    std::cout << "getline with whitespace\n";
    while(std::getline(std::cin, s, ' '))
    {
        std::cout << "str: " << s << "\n";
    }
#endif

#ifdef GETLINE_N
    std::cout << "getline with newline\n";
    while(std::getline(std::cin, s, '\n'))
    {        
        std::cout << "str: " << s << "\n";
    }
#endif

    return 0;
}