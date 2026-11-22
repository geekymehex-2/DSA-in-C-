class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        vector<vector<int>> ans;
        int n = arr.size();
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<n;i++){
            int x = arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1];
            pq.push({x,i});
            if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(arr[pq.top().second]);
            pq.pop();
        }
        return ans;
    }
};