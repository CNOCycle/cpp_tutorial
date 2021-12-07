#include <iostream>
#include <string>

int main()
{
    std::string a = "Hello world";
    for(size_t ii = 0; ii < a.size(); ii = ii + 1)
    {
        std::cout.put(a[ii]);
    }
    std::cout << "\n";

    return 0;
}