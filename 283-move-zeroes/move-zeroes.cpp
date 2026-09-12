class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int insertpos = 0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                arr[insertpos++] = arr[i];
            }
        }
        for(int i=insertpos;i<n;i++){
            arr[i] = 0;
        }
    }
};