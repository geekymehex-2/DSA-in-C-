
class Solution {
public:
    int dfs(TreeNode* root){
        if(root == NULL) return 0;
        int left =  dfs(root->left);
        int right =  dfs(root->right);
        return  1 + max(left,right);
    }
    int maxDepth(TreeNode* root) {
        return dfs(root);
    }
};