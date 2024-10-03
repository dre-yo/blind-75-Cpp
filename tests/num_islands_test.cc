#include <gtest/gtest.h>

#include "../solution/num_islands.cc"

TEST(NumIslandsTest, SampleTest) {
  std::vector<std::vector<char>> grid = {{'1', '1', '1', '1', '0'},
                                         {'1', '1', '0', '1', '0'},
                                         {'1', '1', '0', '0', '0'},
                                         {'0', '0', '0', '0', '0'}};
  EXPECT_EQ(1, NumIslands(grid));
}

TEST(NumIslandsTest, SampleTest2) {
  std::vector<std::vector<char>> grid = {{'1', '1', '0', '0', '0'},
                                         {'1', '1', '0', '0', '0'},
                                         {'0', '0', '1', '0', '0'},
                                         {'0', '0', '0', '1', '1'}};
  EXPECT_EQ(3, NumIslands(grid));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
