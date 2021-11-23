// include same header file twice
#include "02-header_guards.h"
#include "02-header_guards.h"

// g++ -c cpp_tutorial/10-coding_style/02-header_guards.cpp
int main()
{
    int b = func(1);
    return 0;
}