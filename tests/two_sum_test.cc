#include "../solution/two_sum.cc"

#include <gtest/gtest.h>

TEST(TwoSumTest, Test1) {
  std::vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  std::vector<int> result = TwoSum(nums, target);
  std::vector<int> expected = {0, 1};
  EXPECT_EQ(result, expected);
}

TEST(TwoSumTest, Test2) {
  std::vector<int> nums = {3, 2, 4};
  int target = 6;
  std::vector<int> result = TwoSum(nums, target);
  std::vector<int> expected = {1, 2};
  EXPECT_EQ(result, expected);
}

TEST(TwoSumTest, Test3) {
  std::vector<int> nums = {3, 3};
  int target = 6;
  std::vector<int> result = TwoSum(nums, target);
  std::vector<int> expected = {0, 1};
  EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}