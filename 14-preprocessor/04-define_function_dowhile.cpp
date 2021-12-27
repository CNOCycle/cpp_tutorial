#include <iostream>
#define SWAP(a, b) do{tmp = a; a = b ; b = tmp;}while(0)

/***
 *   > g++ -E cpp_tutorial/14-preprocessor/04-define_function_dowhile.cpp
***/

int main()
{
    int a = -1;
    int b = 2;
    int n = 0;
    int tmp = 10;
    
    if(n > 1)
    SWAP(a,b);

    std::cout << a << " ";
    std::cout << b << "\n";

    return 0;
}