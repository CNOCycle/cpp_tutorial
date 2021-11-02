#include <iostream>
#include <vector>

int main()
{
    // const should be declared with uppercase
    const size_t SIZE = 50;

    // create vector by given size
    std::vector<int> a(SIZE);
    std::cout << a.size() << "\n";
    std::cout << a.capacity() << "\n";

    // create vector by given contents
    std::vector<double> b = {-1.1, -2.2, -3.3, -4.4, -5.5, -6.6};
    std::cout << b.size() << "\n";
    std::cout << b.capacity() << "\n";

    // remove a element
    b.pop_back();
    std::cout << b.size() << "\n";
    std::cout << b.capacity() << "\n";

    std::cout << "list all elements by index\n";
    for(size_t ii = 0; ii < b.size(); ii = ii + 1)
    {
        std::cout << ii << ", " << b[ii] << "\n";
    }

    /*
    A set in mathematics is a collection of elements
    For example A = {7.0, 8.0, 9.0}
    The order of each element in the set A is undefined
    we cannot access element by index, instead we need to a iterator
    */
    std::cout << "list all elements by iterator\n";
    for(std::vector<double>::iterator it = b.begin(); it != b.end(); it = it + 1)
    {
        std::cout << *it << "\n";
    }

    std::cout << "list all element by range-based (since C++11)\n";
    for(auto val: b)
    {
        std::cout << val << "\n";
    }

    std::cout << "reset vector\n";
    b.clear();
    std::cout << b.size() << "\n";
    std::cout << b.capacity() << "\n";
    for(auto val: b)
    {
        std::cout << val << "\n";
    }

    /*****************************
    std::vector<int> c(10);
    std::vector<int> d(10);
    std::vector<int> e(10);
    e = c + d // ((?)
    for(int ii = 0; ii <= e.size(); ii = ii + 1)
    {
        e[ii] = c[ii] + d[ii];
    }
    *****************************/


    return 0;

}