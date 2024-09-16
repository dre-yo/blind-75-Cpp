#include "../solution/max_prod_sub_array.cc"

#include <gtest/gtest.h>

TEST(MaxProdSubArray, Test1) {
  std::vector<int> nums = {2, 3, -2, 4};
  int result = MaxProduct(nums);
  int expected = 6;
  EXPECT_EQ(result, expected);
}

TEST(MaxProdSubArray, Test2) {
  std::vector<int> nums = {-2, 0, -1};
  int result = MaxProduct(nums);
  int expected = 0;
  EXPECT_EQ(result, expected);
}

TEST(MaxProdSubArray, TestPositiveNumbers) {
  std::vector<int> nums = {2, 3, 4};
  int result = MaxProduct(nums);
  int expected = 24;
  EXPECT_EQ(result, expected);
}

TEST(MaxProdSubArray, TestNegativeNumbers) {
  std::vector<int> nums = {-2, -3, -4};
  int result = MaxProduct(nums);
  int expected = 12;
  EXPECT_EQ(result, expected);
}

TEST(MaxProdSubArray, TestMixOfPositiveAndNegativeNumbers) {
  std::vector<int> nums = {2, -3, 4, -1};
  int result = MaxProduct(nums);
  int expected = 24;
  EXPECT_EQ(result, expected);
}

TEST(MaxProdSubArray, TestWithZeroInArray) {
  std::vector<int> nums = {2, 0, 3, 4};
  int result = MaxProduct(nums);
  int expected = 12;
  EXPECT_EQ(result, expected);
}

TEST(MaxProdSubArray, TestSingleElementArray) {
  std::vector<int> nums = {5};
  int result = MaxProduct(nums);
  int expected = 5;
  EXPECT_EQ(result, expected);
}
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}