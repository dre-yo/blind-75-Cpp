#include "../solution/three_sum.cc"

#include <gtest/gtest.h>

TEST(ThreeSumTest, Test1) {
  std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
  std::vector<std::vector<int>> result = ThreeSum(nums);
  std::vector<std::vector<int>> expected = {{-1, -1, 2}, {-1, 0, 1}};
  EXPECT_EQ(result, expected);
}

TEST(ThreeSumTest, Test2) {
  std::vector<int> nums = {0, 1, 1};
  std::vector<std::vector<int>> result = ThreeSum(nums);
  std::vector<std::vector<int>> expected = {};
  EXPECT_EQ(result, expected);
}

TEST(ThreeSumTest, Test3) {
  std::vector<int> nums = {0, 0, 0};
  std::vector<std::vector<int>> result = ThreeSum(nums);
  std::vector<std::vector<int>> expected = {{0, 0, 0}};
  EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
