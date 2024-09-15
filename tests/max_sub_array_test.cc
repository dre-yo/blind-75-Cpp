#include "../solution/max_sub_array.cc"

#include <gtest/gtest.h>

// Test case 1
TEST(MaxSubArrayTest, Test1) {
  std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  EXPECT_EQ(MaxSubArray(nums), 6);
}

// Test case 2
TEST(MaxSubArrayTest, Test2) {
  std::vector<int> nums = {1};
  EXPECT_EQ(MaxSubArray(nums), 1);
}

// Test case 3
TEST(MaxSubArrayTest, Test3) {
  std::vector<int> nums = {5, 4, -1, 7, 8};
  EXPECT_EQ(MaxSubArray(nums), 23);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
