
class Solution {
public:
    int dfs(TreeNode* root){
        if(root == NULL) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        if(left == NULL || right == NULL){
            return 1 + max(left,right);
        }
        return 1 + min(left,right);
    }
    int minDepth(TreeNode* root) {
        return dfs(root);
    }
};