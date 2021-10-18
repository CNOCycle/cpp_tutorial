#include <iostream>
#include <string>

int main()
{
    // create string by the given content
    std::string a("hello world");
    std::cout << a.size() << "\n";
    std::cout << a.capacity() << "\n";

    // remove a element
    a.pop_back();
    std::cout << a.size() << "\n";
    std::cout << a.capacity() << "\n";

    std::cout << "list all elements by index\n";
    for(size_t ii = 0; ii < a.size(); ii = ii + 1)
    {
        std::cout << ii << ", " << a[ii] << "\n";
    }

    std::cout << "list all elements by iterator\n";
    for(std::string::iterator it = a.begin(); it != a.end(); it = it + 1)
    {
        std::cout << *it << "\n";
    }

    std::cout << "list all element by range-based (since C++11)\n";
    for(auto val: a)
    {
        std::cout << val << "\n";
    }

    std::cout << "reset vector\n";
    a.clear();
    std::cout << a.size() << "\n";
    std::cout << a.capacity() << "\n";
    for(auto val: a)
    {
        std::cout << val << "\n";
    }

    /*****************************/
    std::string b = "hello";
    std::string c = " world";
    std::string d = b + c;
    std::cout << d << "\n";
    //for(int ii = 0; ii <= d.size(); ii = ii + 1)
    //{
    //    e[ii] = b[ii] + c[ii];
    //}
    //
    // std::vector<int> a(10);
    // std::cout << a << "\n"; (?)
    /*****************************/

    return 0;

}