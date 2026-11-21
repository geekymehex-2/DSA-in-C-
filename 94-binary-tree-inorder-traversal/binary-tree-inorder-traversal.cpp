
class Solution {
public:
    //Method 2:
    void morris(TreeNode* root, vector<int>& ans){
       TreeNode* curr = root;
       while(curr != NULL){
            if(curr->left != NULL){
                //find predecessor
                TreeNode* pred = curr->left;
                while(pred->right != NULL && pred->right != curr)
                    pred  = pred->right;
                //linking
                if(pred->right == NULL){
                    pred->right = curr;
                    curr = curr->left;
                }
                else{ //pred->right == curr
                    pred->right = NULL; // unlink
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
            else{  // 
                ans.push_back(curr->val);
                curr = curr->right;
            }
       }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        morris(root,ans);
        return ans;
    }


    //Method 1:
    // void dfs(TreeNode* root, vector<int>& ans){
    //     if(root == NULL) return;
    //     dfs(root->left,ans);
    //     ans.push_back(root->val);
    //     dfs(root->right,ans);
    // }
    // vector<int> inorderTraversal(TreeNode* root) {
    //     vector<int> ans;
    //     dfs(root,ans);
    //     return ans;
    // }
};