#include <iostream>

/***
 *   > g++ -E cpp_tutorial/14-preprocessor/06-ifdef_ifndef.cpp
 *   > g++ -E -D DEBUG cpp_tutorial/14-preprocessor/06-ifdef_ifndef.cpp
***/

int main()
{

//#define DEBUG
//#undef DEBUG

#ifdef DEBUG
    std::cout << "debug mode\n";
#endif

#ifndef DEBUG
    std::cout << "release mode\n";
#endif

    return 0;
}