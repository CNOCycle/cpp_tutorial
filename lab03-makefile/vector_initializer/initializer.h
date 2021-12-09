#pragma once
#include <vector>

std::vector<int> const_val(std::vector<int> vec, unsigned length, int val);

std::vector<double> const_val(std::vector<double> vec, unsigned length, double val);

// in-place version
void const_val_(std::vector<int> &vec, unsigned length, int val);

void const_val_(std::vector<double> &vec, unsigned length, double val);