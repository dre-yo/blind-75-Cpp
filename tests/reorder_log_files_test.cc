#include <gtest/gtest.h>

#include "../solution/reorder_log_files.cc"

TEST(ReorderLogFilesTest, ReorderLogFilesTest1) {
  std::vector<std::string> logs = {"dig1 8 1 5 1", "let1 art can", "dig2 3 6",
                                   "let2 own kit dig", "let3 art zero"};
  std::vector<std::string> expected = {"let1 art can", "let3 art zero",
                                       "let2 own kit dig", "dig1 8 1 5 1",
                                       "dig2 3 6"};
  EXPECT_EQ(ReorderLogFiles(logs), expected);
}

TEST(ReorderLogFilesTest, ReorderLogFilesTest2) {
  std::vector<std::string> logs = {"a1 9 2 3 1", "g1 act car", "zo4 4 7",
                                   "ab1 off key dog", "a8 act zoo"};
  std::vector<std::string> expected = {
      "g1 act car", "a8 act zoo", "ab1 off key dog", "a1 9 2 3 1", "zo4 4 7"};
  EXPECT_EQ(ReorderLogFiles(logs), expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
