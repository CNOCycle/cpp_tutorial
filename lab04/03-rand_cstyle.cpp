#include <cstdlib>
#include <iostream>

/***
 *  > g++ cpp_tutorial/lab03/02-rand_cstyle.cpp && ./a.out
 *  > 6
 *  > ./a.out
 *  > 6
 *  > ./a.out
 *  > 6
 *  > ./a.out
 *  > 6
 *  > g++ -D SEED cpp_tutorial/lab03/02-rand_cstyle.cpp && ./a.out
 *  > 10
 *  > ./a.out
 *  > 8
 *  > ./a.out
 *  > 9
 *  > ./a.out
 *  > 6
***/
int main()
{

#ifdef SEED
    // initialize random seed by system time 
    srand (time(NULL));
#endif

    // return a random integer between 0 and RAND_MAX inclusive.
    int r = std::rand();

    // get a random value between [a, b]
    int a = 5;
    int b = 10;
    int s = (r % (b - a + 1)) + a;

    std::cout << s << "\n";
    return 0;
}