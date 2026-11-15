
class Solution {
public:
    class Triplet{
    public:
        long long mx;
        long long mn;
        bool isBST;
    };
    Triplet solve(TreeNode* root){
        if(root == NULL) return {LLONG_MIN,LLONG_MAX,true};
        Triplet left = solve(root->left);
        Triplet right = solve(root->right);
        long long val = root->val;
        long long mx = max(val, max(left.mx,right.mx));
        long long mn = min(val , min(left.mn,right.mn));
        bool isBST = (val > left.mx && val < right.mn && left.isBST && right.isBST);
        return {mx,mn,isBST};
    }
    bool isValidBST(TreeNode* root) {
        return solve(root).isBST;
    }






    // void dfs(TreeNode* root,vector<int>& ans){
    //     if(root == NULL) return;
    //     dfs(root->left,ans);
    //     ans.push_back(root->val);
        
    //     dfs(root->right,ans);
    // }
    // bool isValidBST(TreeNode* root) {
    //     vector<int> ans;
    //     dfs(root,ans);
    //     int n = ans.size();
    //     for(int i=0;i<n-1;i++){
    //         if(ans[i] >= ans[i+1]) return false;
    //     }
    //     return true;
    // }
};