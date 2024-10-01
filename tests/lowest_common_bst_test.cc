#include <gtest/gtest.h>

#include "../solution/lowest_common_bst.cc"

TEST(LowestCommonAncestorTest, case1) {
  // Constructing the tree:
  //         6
  //        / \
  //       2   8
  TreeNode *root = new TreeNode(6);
  root->left = new TreeNode(2);
  root->right = new TreeNode(8);

  TreeNode *p = root->left;  // Node with value 2
  TreeNode *q = root->right; // Node with value 8

  TreeNode *lca = LowestCommonAncestor(root, p, q);
  EXPECT_EQ(6, lca->val);

  // Cleanup memory
  delete root->left;
  delete root->right;
  delete root;
}

TEST(LowestCommonAncestorTest, case2) {
  // Constructing the tree:
  //         6
  //        / \
  //       2   8
  //        \
  //         4
  TreeNode *root = new TreeNode(6);
  root->left = new TreeNode(2);
  root->right = new TreeNode(8);
  root->left->right = new TreeNode(4);

  TreeNode *p = root->left;        // Node with value 2
  TreeNode *q = root->left->right; // Node with value 4

  TreeNode *lca = LowestCommonAncestor(root, p, q);
  EXPECT_EQ(2, lca->val);

  // Cleanup memory
  delete root->left->right;
  delete root->left;
  delete root->right;
  delete root;
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

