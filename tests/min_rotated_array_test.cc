#include "../solution/min_rotated_array.cc"

#include <gtest/gtest.h>

// Test case 1
TEST(MinRotatedArrayTest, Test1) {
  std::vector<int> nums = {3, 4, 5, 1, 2};
  EXPECT_EQ(FindMin(nums), 1);
}

// Test case 2
TEST(MinRotatedArrayTest, Test2) {
  std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
  EXPECT_EQ(FindMin(nums), 0);
}

// Test case 3
TEST(MinRotatedArrayTest, Test3) {
  std::vector<int> nums = {11, 13, 15, 17};
  EXPECT_EQ(FindMin(nums), 11);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}