class Solution {
public:
    int dia;
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int leftLvl = levels(root->left);
        int rightLvl = levels(root->right);
        dia = max(dia,leftLvl+rightLvl);
        return 1 + max(leftLvl,rightLvl);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dia = 0;
        levels(root);
        return dia;
    }
};