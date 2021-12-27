#include <iostream>

/***
 *   > g++ -E cpp_tutorial/14-preprocessor/05-if_else_endif.cpp
***/

int main()
{

#define DEBUG 1

/* re-define DEBUG
#undef DEBUG
#define DEBUG 0
*/
#if DEBUG
    std::cout << "debug mode\n";
#else
    std::cout << "release mode\n";
#endif

    return 0;
}