#include <iostream>
#include <cassert>

/***
 *   # example1:
 *   > g++ cpp_tutorial/15-assert_exception/01-assert.cpp
 *   > ./a.out
 *   > a.out: cpp_tutorial/15-assert_exception/01-assert.cpp:15: int main(): Assertion `4 == 5' failed.
 *   > Aborted (core dumped)
 *   # example2:
 *   > g++ -DNDEBUG cpp_tutorial/15-assert_exception/01-assert.cpp
 *   > ./a.out
***/

int main()
{

    assert(4 == 5);

    return 0;
}