#include <gtest/gtest.h>
#include "../solution/longest_palindrome.cc"

TEST(LongestPalindromeTest, SampleTest) {
  EXPECT_EQ(LongestPalindrome("babad"), "bab");
  EXPECT_EQ(LongestPalindrome("cbbd"), "bb");
  EXPECT_EQ(LongestPalindrome("a"), "a");
}

TEST(LongestPalindromeTest, EmptyString) {
  EXPECT_EQ(LongestPalindrome(""), "");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
