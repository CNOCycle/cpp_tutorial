/*************************************************
  This section is main function about google test.
  Don't modify or remove this file.
***************************************************/
#include "gtest/gtest.h"
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); 
    return RUN_ALL_TESTS();
}