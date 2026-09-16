class Solution {
public:
    int mySqrt(int n) {
        if(n==0) return 0; //Base Case
        int l = 1, h = n; //O(logn)- T.C
        while(l<=h){
            int mid = l+(h-l)/2;
            if(mid>n/mid) h = mid-1;
            else if(mid<n/mid) l = mid+1;
            else return mid;
        }
        return h;
    }
};