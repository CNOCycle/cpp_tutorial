#include <cstdlib>

/*
*   # example 1
*   > g++ cpp_tutorial/08-function/01-exit_status.cpp -D FAILURE && ./a.out; echo $?
*   > 1
*   # example 2
*   > g++ cpp_tutorial/08-function/01-exit_status.cpp && ./a.out; echo $?
*   > 0
*/

int main()
{

#ifdef FAILURE
    return EXIT_FAILURE;
#else
    return EXIT_SUCCESS;
#endif

}