#include <vector>

void bubble_sort(std::vector<int>& vec)
{
    for(size_t ii = 0; ii < vec.size(); ii = ii + 1)
    {
        for(size_t jj = 0; jj < vec.size() - 1 - ii; jj = jj + 1)
        {
            if(vec[jj] > vec[jj + 1])
            {
                int tmp = vec[jj + 1];
                vec[jj + 1] = vec[jj];
                vec[jj] = tmp;
            }
        }
    }
}