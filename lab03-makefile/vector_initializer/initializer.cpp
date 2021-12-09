#include <vector>
#include "initializer.h"

void kernel(std::vector<int> &vec, unsigned length, int val)
{
    if(vec.size() != length)
    {
        vec.resize(length);
    }

    for(size_t ii = 0; ii != vec.size(); ii = ii + 1)
    {
        vec[ii] = val;
    }
}

void kernel(std::vector<double> &vec, unsigned length, double val)
{
    if(vec.size() != length)
    {
        vec.resize(length);
    }

    for(size_t ii = 0; ii != vec.size(); ii = ii + 1)
    {
        vec[ii] = val;
    }
}

std::vector<int> const_val(std::vector<int> vec, unsigned length, int val)
{
    kernel(vec, length, val);
    return vec;
}

std::vector<double> const_val(std::vector<double> vec, unsigned length, double val)
{
    kernel(vec, length, val);
    return vec;
}

void const_val_(std::vector<int> &vec, unsigned length, int val)
{
    kernel(vec, length, val);
}

void const_val_(std::vector<double> &vec, unsigned length, double val)
{
    kernel(vec, length, val);
}