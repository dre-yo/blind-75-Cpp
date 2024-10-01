#include <vector>
#include <gtest/gtest.h>
#include "../solution/rotate_matrix.cc"

TEST(RotateMatrixTest, Test1) {
  std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  RotateMatrix(matrix);
  std::vector<std::vector<int>> expected = {{7, 4, 1}, {8, 5, 2}, {9, 6, 3}};
  EXPECT_EQ(matrix, expected);
}

TEST(RotateMatrixTest, Test2) {
  std::vector<std::vector<int>> matrix = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
  RotateMatrix(matrix);
  std::vector<std::vector<int>> expected = {{15, 13, 2, 5}, {14, 3, 4, 1}, {12, 6, 8, 9}, {16, 7, 10, 11}};
  EXPECT_EQ(matrix, expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
