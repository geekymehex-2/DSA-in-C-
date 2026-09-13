class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int lo = 0, mid = 0, hi = n-1;
        while(mid<=hi){
            if(arr[mid]==0){
                swap(arr[lo],arr[mid]);
                mid++;
                lo++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[hi]);
                hi--;
            }
        }
    }
};