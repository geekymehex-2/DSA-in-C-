class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        if(n==0) return 0;
        int k = 1;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[k-1]){
                arr[k] = arr[i];
                k++;
            }
        }
        return k;
    }
};