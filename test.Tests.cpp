#include "test.h"
#include <gtest/gtest.h>

TEST(testsuite, testcase10{
int exp = 25;
int actual = printColourCode();
ASSERT_EQ(exp,actual);
}
