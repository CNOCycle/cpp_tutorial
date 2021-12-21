#pragma once
#include <iostream>
#include <vector>

void print(std::vector<int> _vec)
{
    for(size_t ii = 0; ii < _vec.size(); ii = ii + 1)
    {
        std::cout << "vec[" << ii << "] = " << _vec[ii] << " ";
    }
    std::cout << "\n";

}

void push_front(std::vector<int> &_vec, int element)
{
    _vec.insert(_vec.begin(), element);
}

void pop_front(std::vector<int> &_vec)
{
    _vec.erase(_vec.begin());
}

void push_back(std::vector<int> &_vec, int element)
{
    _vec.push_back(element);
}

void pop_back(std::vector<int> &_vec)
{
    _vec.pop_back();
}
