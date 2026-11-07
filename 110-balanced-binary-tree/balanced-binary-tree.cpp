
class Solution {
public:
    bool ans;
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int left = levels(root->left);
        int right = levels(root->right);
        if(abs(left-right) > 1) ans = false;
        return 1 + max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        ans = true;
        levels(root);
        return ans;
    }
};