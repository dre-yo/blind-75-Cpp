#include <gtest/gtest.h>
#include "../solution/two_ints.cc"

TEST(TwoIntsTest, Test1) {
  int a = 1;
  int b = 2;
  int result = GetSum(a, b);
  int expected = 3;
  EXPECT_EQ(result, expected);
}

TEST(TwoIntsTest, Test2) {
  int a = 2;
  int b = 3;
  int result = GetSum(a, b);
  int expected = 5;
  EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
