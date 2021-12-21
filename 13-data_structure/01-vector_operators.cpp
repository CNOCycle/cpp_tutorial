#include <iostream>
#include <vector>
#include "util_vector.h"

int main()
{
    std::vector<int> v = {100, 200, 300};
    print(v);

    push_front(v, 400);
    print(v);

    push_back(v, 500);
    print(v);

    pop_front(v);
    print(v);

    pop_back(v);
    print(v);

    return 0;
}
