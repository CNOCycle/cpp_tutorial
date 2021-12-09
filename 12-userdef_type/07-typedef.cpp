#include <iostream>
#include <vector>

typedef std::vector<int> INT_VEC;

INT_VEC init(std::vector<int> vec)
{
    for(size_t ii = 0; ii < vec.size(); ii = ii + 1)
    {
        vec[ii] = ii;
    }

    return vec;
}

int main()
{
    
    INT_VEC a(10);
    INT_VEC b = init(a);
    for(size_t ii = 0; ii < b.size(); ii = ii + 1)
    {
        std::cout << b[ii] << "\n";
    }

    return 0;
}