#include <unordered_map>
#include <vector>

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right)
      : val(x), left(left), right(right) {}
};

class Solution {
 private:
  int preorder_index = 0;
  std::unordered_map<int, int> mapping;

 public:
  TreeNode* BuildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
    mapping.clear();

    for (std::size_t i = 0; i < inorder.size(); i++) {
      mapping[inorder[i]] = i;
    }
    preorder_index = 0;
    return Build(preorder, 0, inorder.size() - 1);
  }

 private:
  TreeNode* Build(std::vector<int>& preorder, int start, int end) {
    if (start > end) return nullptr;

    int rootVal = preorder[preorder_index++];
    TreeNode* root = new TreeNode(rootVal);
    int mid = mapping[rootVal];

    root->left = Build(preorder, start, mid - 1);
    root->right = Build(preorder, mid + 1, end);

    return root;
  }
};
