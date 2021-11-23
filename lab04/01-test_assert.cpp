/***
 * ref: https://github.com/google/googletest/blob/master/googletest/samples/sample1_unittest.cc
***/


/***
 *  Step 1. Include necessary header files such that the stuff your test logic needs is declared
 *       a) standard header files
 *       b) target header files
 *       c) gtest.h
***/

#include <string>
#include "01-simple.h"
#include "gtest/gtest.h"


/***
 *  Step 2. Use the TEST macro to define your tests.
***/

TEST(TESTBOOL, INPUT_TRUE)
{
    ASSERT_TRUE(identity(true));
}

TEST(TESTBOOL, INPUT_FALSE)
{
    ASSERT_FALSE(identity(false));
}

TEST(TESTBOOL, TEST_EQ)
{
    ASSERT_EQ(identity(true), true);
    ASSERT_EQ(identity(false), false);
}

TEST(TESTBOOL, TEST_NEQ)
{
    ASSERT_NE(identity(true), false);
    ASSERT_NE(identity(false), true);
}

TEST(BOOLFAILED, FAILED)
{
    GTEST_SKIP();
    ASSERT_TRUE(identity(false));
}

TEST(TESTINT, random_test)
{
    ASSERT_EQ(identity(int(1)), int(1));
    ASSERT_NE(identity(int(2)), int(1));

    // val < val2
    ASSERT_LT(identity(int(0)), int(1));
    ASSERT_LT(identity(int(-1)), int(1));

    // val <= val2
    ASSERT_LE(identity(int(1)), int(1));
    ASSERT_LE(identity(int(0)), int(1));

    // val > val2
    ASSERT_GT(identity(int(1)), int(0));
    ASSERT_GT(identity(int(2)), int(0));

    // val >= val2
    ASSERT_GE(identity(int(1)), int(0));
    ASSERT_GE(identity(int(0)), int(0));
}

TEST(TESTSTRING, random_test)
{
    std::string result = identity(std::string("HI"));
    ASSERT_STREQ(result.c_str(), "HI");
    ASSERT_STRNE(result.c_str(), "NO");

    // Verifies that the two C strings str1 and str2 have the same contents, ignoring case.
    ASSERT_STRCASEEQ(result.c_str(), "HI");
    ASSERT_STRCASEEQ(result.c_str(), "Hi");
    ASSERT_STRCASEEQ(result.c_str(), "hI");
    ASSERT_STRCASEEQ(result.c_str(), "hi");

    // Verifies that the two C strings str1 and str2 have different contents, ignoring case.
    ASSERT_STRCASENE(result.c_str(), "NO");
    ASSERT_STRCASENE(result.c_str(), "No");
    ASSERT_STRCASENE(result.c_str(), "nO");
    ASSERT_STRCASENE(result.c_str(), "no");
}

TEST(TESTFLOAT, test_float_eq)
{
    float a= 1.0;
    float b = 1e-1;
    float err = 1e-4;
    ASSERT_FLOAT_EQ(identity(a, b), b);
}

TEST(DISABLED_TESTFLOAT, test_exact_eq)
{
    float a= 1.0;
    float b = 1e-1;
    ASSERT_EQ(identity(a, b), b);
}

TEST(TESTFLOAT, DISABLED_convert_to_double)
{
    float a = 1.0;
    float b = 1e-1;
    float err = 1e-9;
    ASSERT_DOUBLE_EQ(identity(a, b), b);
    ASSERT_NEAR(identity(a, b), b, err);
}

TEST(TESTFLOAT, except_convert_to_double)
{
    float a = 1.0;
    float b = 1e-1;
    float err = 1e-9;
    EXPECT_DOUBLE_EQ(identity(a, b), b);
    ASSERT_NEAR(identity(a, b), a, err);
}