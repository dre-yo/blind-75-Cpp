#include <gtest/gtest.h>

#include "../solution/pacific_atlantic.cc"

TEST(PacificAtlantic, Example1) {
  std::vector<std::vector<int>> heights = {{1, 2, 2, 3, 5},
                                           {3, 2, 3, 4, 4},
                                           {2, 4, 5, 3, 1},
                                           {6, 7, 1, 4, 5},
                                           {5, 1, 1, 2, 4}};
  std::vector<std::vector<int>> expected = {{0, 4}, {1, 3}, {1, 4}, {2, 2},
                                            {3, 0}, {3, 1}, {4, 0}};
  std::vector<std::vector<int>> result = PacificAtlantic(heights);
  EXPECT_EQ(result, expected);
}

TEST(PacificAtlantic, Example2) {
  std::vector<std::vector<int>> heights = {{1}};
  std::vector<std::vector<int>> expected = {{0, 0}};
  std::vector<std::vector<int>> result = PacificAtlantic(heights);
  EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
