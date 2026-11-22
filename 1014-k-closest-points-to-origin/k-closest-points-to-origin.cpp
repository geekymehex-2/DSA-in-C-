class Solution {
public:
    typedef pair<int,pair<int,int>> pip;
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        priority_queue<pip> pq;
        for(int i=0;i<arr.size();i++){
            int x = arr[i][0];
            int y = arr[i][1];
            int dist = x*x + y*y;
            pq.push({dist,{x,y}});
            if(pq.size() > k) pq.pop();
        }
        vector<vector<int>> ans;
        while(pq.size() > 0){
            pip point = pq.top();
            pq.pop();
            int x = point.second.first;
            int y = point.second.second;
            ans.push_back({x,y});
        }
        return ans;
    }
};