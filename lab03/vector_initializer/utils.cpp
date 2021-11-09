#include <vector>
#include "utils.h"
#include "spdlog/spdlog.h"

void print(std::vector<int> &vec)
{
    for(size_t ii = 0; ii < vec.size(); ii = ii + 1)
    {
        
        spdlog::info("vec[{:03d}] = {:d}", ii, vec[ii]);
    }
}
void print(std::vector<double> &vec)
{
    for(size_t ii = 0; ii < vec.size(); ii = ii + 1)
    {
        spdlog::info("vec[{:03d}] = {:.3f}", ii, vec[ii]);
    }
}