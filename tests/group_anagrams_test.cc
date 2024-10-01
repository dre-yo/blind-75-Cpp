#include <gtest/gtest.h>

#include "../solution/group_anagrams.cc"


TEST(GroupAnagramTest, Test1){
  std::vector<std::string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
  std::vector<std::vector<std::string>> result = GroupAnagram(strs);
  std::vector<std::vector<std::string>> expected = { { "bat" }, { "tan", "nat" }, { "eat", "tea", "ate" } };
  EXPECT_EQ(result, expected);
}

TEST(GroupAnagramTest, Test2){
  std::vector<std::string> strs = {};
  std::vector<std::vector<std::string>> result = GroupAnagram(strs);
  std::vector<std::vector<std::string>> expected = {};
  EXPECT_EQ(result, expected);
}

TEST(GroupAnagramTest, Test3){
  std::vector<std::string> strs = {"a"};
  std::vector<std::vector<std::string>> result = GroupAnagram(strs);
  std::vector<std::vector<std::string>> expected = {{"a"}};
  EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
