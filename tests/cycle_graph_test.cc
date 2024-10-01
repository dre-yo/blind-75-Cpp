#include <gtest/gtest.h>
#include "../solution/cycle_graph.cc"

TEST(SpiralOrderTest, Test1) {
  std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  std::vector<int> result = SpiralOrder(matrix);
  std::vector<int> expected = {1, 2, 3, 6, 9, 8, 7, 4, 5};
  EXPECT_EQ(result, expected);
}

TEST(SpiralOrderTest, Test2) {
  std::vector<std::vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  std::vector<int> result = SpiralOrder(matrix);
  std::vector<int> expected = {1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7};
  EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
