/***
 * ref: https://github.com/google/googletest/blob/master/googletest/samples/sample1_unittest.cc
***/


/***
 *  Step 1. Include necessary header files such that the stuff your test logic needs is declared
 *       a) standard header files
 *       b) target header files
 *       c) gtest.h
***/

#include <algorithm>
#include <vector>
#include <random>
#include "02-sort.h"
#include "gtest/gtest.h"


/***
 *  Step 2. Use the TEST macro to define your tests.
***/

void gen_data(std::vector<int>& vec_, std::vector<int>& ans_, bool& modify)
{
    int MIN_VAL = -1e9;
    int MAX_VAL = 1e9;
    int MAX_LEN = 10000;

    // random generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(MIN_VAL, MAX_VAL);

    // generate random data
    std::vector<int> vec(MAX_LEN);
    std::vector<int> ans(MAX_LEN);
    for(size_t ii = 0; ii < vec.size(); ii = ii + 1)
    {
        vec[ii] = dis(gen);
        ans[ii] = vec[ii];
    }

    // get sorted vector using C++ STL
    std::sort (ans.begin(), ans.end());

    // modify the first element randomly
    modify = (dis(gen) > 0);

    // return vectors
    vec_ = vec;
    ans_ = ans;
}

TEST(randomtest, SUCCEED)
{
    // generate data
    std::vector<int> vec;
    std::vector<int> ans;
    bool modify;
    gen_data(vec, ans, modify);

    // get sorted vector using our bubble sort
    bubble_sort(vec);

    // check result
    bool succeed = true;
    for(size_t ii = 0; ii < vec.size(); ii = ii + 1)
    {
        if(ans[ii] != vec[ii])
        {
            succeed = false;
            break;
        }
    }

    if(succeed)
    {
        SUCCEED();
    }
    else
    {
        FAIL();
    }
}

TEST(randomtest, DISABLED_MAY_FAILED)
{
    // generate data
    std::vector<int> vec;
    std::vector<int> ans;
    bool modify;
    gen_data(vec, ans, modify);

    // get sorted vector using our bubble sort
    bubble_sort(vec);

    // modify the first element randomly
    if (modify)
    {
        size_t idx = vec.size() - 1;
        vec[0] = vec[idx];
    }

    // check result
    bool succeed = true;
    for(size_t ii = 0; ii < vec.size(); ii = ii + 1)
    {
        if(ans[ii] != vec[ii])
        {
            succeed = false;
            break;
        }
    }

    if(succeed)
    {
        SUCCEED();
    }
    else
    {
        FAIL();
    }
}
