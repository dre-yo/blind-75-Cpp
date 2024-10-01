#include <gtest/gtest.h>
#include "../solution/word_search.cc"

TEST(WordSearchTest, case1) {
  std::vector<std::vector<char>> board = {
    {'A', 'B', 'C', 'E'},
    {'S', 'F', 'C', 'S'},
    {'A', 'D', 'E', 'E'}
  };
  std::string word = "ABCCED";
  EXPECT_TRUE(exist(board, word));
}

TEST(WordSearchTest, case2) {
  std::vector<std::vector<char>> board = {
    {'A', 'B', 'C', 'E'},
    {'S', 'F', 'C', 'S'},
    {'A', 'D', 'E', 'E'}
  };
  std::string word = "SEE";
  EXPECT_TRUE(exist(board, word));
}

TEST(WordSearchTest, case3) {
  std::vector<std::vector<char>> board = {
    {'A', 'B', 'C', 'E'},
    {'S', 'F', 'C', 'S'},
    {'A', 'D', 'E', 'E'}
  };
  std::string word = "ABCB";
  EXPECT_FALSE(exist(board, word));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
