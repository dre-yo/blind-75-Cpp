#include <gtest/gtest.h>

#include "../solution/search_rotated_array.cc"

TEST(SearchRotatedArrayTest, Test1) {
  std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
  int target = 0;
  int result = Search(nums, target);
  int expected = 4;
  EXPECT_EQ(result, expected);
}

TEST(SearchRotatedArrayTest, Test2) {
  std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
  int target = 3;
  int result = Search(nums, target);
  int expected = -1;
  EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
