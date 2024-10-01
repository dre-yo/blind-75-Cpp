#include <gtest/gtest.h>
#include "../solution/palindrome_substring_count.cc"

TEST(palindrome_substring_count, case1) {
  std::string s = "abc";
  int res = CountSubstrings(s);
  EXPECT_EQ(res, 3);
} 

TEST(palindrome_substring_count, case2) {
  std::string s = "aaa";
  int res = CountSubstrings(s);
  EXPECT_EQ(res, 6);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
