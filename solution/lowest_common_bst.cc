struct TreeNode {
  int val; 
  TreeNode *left; 
  TreeNode *right; 
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} 
};

TreeNode* LowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  TreeNode* curr = root;

  while (curr != nullptr){
    if (p->val > curr->val && q->val > curr->val){
      curr = curr->right;
    } else if (p->val < curr->val && q->val < curr->val){
      curr = curr->left;
    } else {
      return curr;
    }
  }
  return nullptr;
} 
