class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int minprice = arr[0];
        int profit = 0;
        for(int i=1;i<n;i++){
            profit = max(profit,arr[i]-minprice);
            minprice = min(minprice,arr[i]);
        }
        return profit;
    }
};