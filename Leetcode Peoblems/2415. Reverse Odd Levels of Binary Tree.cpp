// 2415. Reverse Odd Levels of Binary Tree

class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        reverserLevel(root->left, root->right, 1);
        return root;
    }
    
    void reverserLevel(TreeNode* first, TreeNode* second, int level) {
        if (first == nullptr || second == nullptr) return;
        if (level %2 != 0) {
            int temp = first->val;
            first->val = second->val;
            second->val = temp;
        }
        
        reverserLevel(first->left, second->right, level+1);
        reverserLevel(first->right, second->left, level+1);
    }
};