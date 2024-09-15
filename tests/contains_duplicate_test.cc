#include "../solution/contains_duplicate.cc"

#include <gtest/gtest.h>

TEST(ContainsDuplicateTest, Test1) {
  std::vector<int> nums = {1, 2, 3, 1};
  bool result = ContainsDuplicate(nums);
  bool expected = true;
  EXPECT_EQ(result, expected);
}

TEST(ContainsDuplicateTest, Test2) {
  std::vector<int> nums = {1, 2, 3, 4};
  bool result = ContainsDuplicate(nums);
  bool expected = false;
  EXPECT_EQ(result, expected);
}

TEST(ContainsDuplicateTest, Test3) {
  std::vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  bool result = ContainsDuplicate(nums);
  bool expected = true;
  EXPECT_EQ(result, expected);
}
TEST(ContainsDuplicateTest, EmptyVector) {
  std::vector<int> nums;
  bool result = ContainsDuplicate(nums);
  EXPECT_FALSE(result);
}

TEST(ContainsDuplicateTest, UniqueElements) {
  std::vector<int> nums = {1, 2, 3, 4, 5};
  bool result = ContainsDuplicate(nums);
  EXPECT_FALSE(result);
}

TEST(ContainsDuplicateTest, DuplicateElements) {
  std::vector<int> nums = {1, 2, 3, 2, 5};
  bool result = ContainsDuplicate(nums);
  EXPECT_TRUE(result);
}

TEST(ContainsDuplicateTest, MultipleDuplicateElements) {
  std::vector<int> nums = {1, 2, 3, 2, 3, 5};
  bool result = ContainsDuplicate(nums);
  EXPECT_TRUE(result);
}

TEST(ContainsDuplicateTest, NegativeNumbers) {
  std::vector<int> nums = {-1, -2, -3, -2, -5};
  bool result = ContainsDuplicate(nums);
  EXPECT_TRUE(result);
}

TEST(ContainsDuplicateTest, LargeNumbers) {
  std::vector<int> nums = {1000, 2000, 3000, 2000, 5000};
  bool result = ContainsDuplicate(nums);
  EXPECT_TRUE(result);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}