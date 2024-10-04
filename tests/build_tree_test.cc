#include <gtest/gtest.h>

#include "../solution/build_tree.cc"

TEST(BuildTree, Sample) {
  std::vector<int> preorder = {3, 9, 20, 15, 7};
  std::vector<int> inorder = {9, 3, 15, 20, 7};
  TreeNode* root = Solution().BuildTree(preorder, inorder);
  EXPECT_EQ(3, root->val);
  EXPECT_EQ(9, root->left->val);
  EXPECT_EQ(20, root->right->val);
  EXPECT_EQ(15, root->right->left->val);
  EXPECT_EQ(7, root->right->right->val);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
