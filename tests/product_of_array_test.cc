#include "../solution/product_of_array.cc"

#include <gtest/gtest.h>

TEST(ProductOfArrayTest, Test1) {
  std::vector<int> nums = {1, 2, 3, 4};
  std::vector<int> result = ProductExceptself(nums);
  std::vector<int> expected = {24, 12, 8, 6};
  EXPECT_EQ(result, expected);
}

TEST(ProductOfArrayTest, Test2) {
  std::vector<int> nums = {-1, 1, 0, -3, 3};
  std::vector<int> result = ProductExceptself(nums);
  std::vector<int> expected = {0, 0, 9, 0, 0};
  EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}