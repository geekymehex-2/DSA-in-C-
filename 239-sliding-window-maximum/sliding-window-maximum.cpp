class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        stack<int> st;
        vector<int> ngi(n,-1);
        for(int i=n-1;i>=0;i--){
            while(st.size() > 0 and arr[st.top()] <= arr[i]) st.pop();
            if(st.size() > 0) ngi[i] = st.top();
            st.push(i);
        }
        vector<int> ans(n-k+1);
        int j = 0;
        for(int i=0;i<n-k+1;i++){
            if(j < i) j = i;
            while(ngi[j] != -1 && ngi[j] < i+k) j = ngi[j];
            ans[i] = arr[j];
        }
        return ans;
    }
};