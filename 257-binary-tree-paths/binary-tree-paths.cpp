
class Solution {
public:
    void dfs(TreeNode* root,string path,vector<string>& arr){
        if(root == NULL)  return;
        path += to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            arr.push_back(path);
            return;
        }
        path += "->";
        dfs(root->left,path,arr);
        dfs(root->right,path,arr);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> arr;
        dfs(root,"",arr);
        return arr;
    }
};