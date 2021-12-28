#include <iostream>
#include <vector>
#include <cassert>

/***
 *   # example1:
 *   > g++ cpp_tutorial/15-assert_exception/04-assert_application.cpp
 *   > ./a.out 100
 *   > a.out: cpp_tutorial/15-assert_exception/04-assert_application.cpp:19: int at(std::vector<int>, int): Assertion `pos < _vec.size()' failed.
 *   > Aborted (core dumped)
 *   # example2:
 *   > g++ -DNDEBUG cpp_tutorial/15-assert_exception/04-assert_application.cpp
 *   > ./a.out 100
 *   > 0
***/

int at(std::vector<int> _vec, int pos)
{
    assert(pos > 0);
    assert(pos < _vec.size());

    return _vec[pos];
}

int main(int args, char* argv[] )
{
    assert(args == 2);

    int pos = std::atoi(argv[1]);
    const int LEN = 10;
    std::vector<int> vec(LEN);
    for(size_t ii = 0; ii < vec.size(); ii = ii + 1)
    {
        vec[ii] = ii + 1;
    }
    std::cout << at(vec, pos) << "\n";

    return 0;
}