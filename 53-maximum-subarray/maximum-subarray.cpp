class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int cursum = arr[0], maxsum = arr[0];
        for(int i=1;i<n;i++){
            cursum = max(arr[i],cursum+arr[i]);\
            maxsum = max(cursum,maxsum);
        }
        return maxsum;
    }
};