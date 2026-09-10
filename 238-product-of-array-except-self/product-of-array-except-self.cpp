class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,1);
        for(int i=1;i<n;i++){ //this holds all product of elements left of i
            ans[i] = ans[i-1] * arr[i-1];
        }
        int rightproduct = 1;
        for(int i=n-1;i>=0;i--){
            ans[i] *= rightproduct;
            rightproduct  *= arr[i];
        }
        return ans;
    }
};