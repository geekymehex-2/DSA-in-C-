class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> nsi(n);
        for(int i=n-1;i>=0;i--){
            while(st.size() > 0 and arr[st.top()] >= arr[i]) st.pop();
            if(st.size() > 0) nsi[i] = st.top();
            else nsi[i] = n;
            st.push(i);
        }
        while(st.size() > 0) st.pop();
        vector<int> psi(n);
        for(int i=0;i<n;i++){
            while(st.size() > 0 and arr[st.top()] >= arr[i]) st.pop();
            if(st.size() > 0) psi[i] = st.top();
            else psi[i] = -1;
            st.push(i);
        }
        int maxArea = 0;
        for(int i=0;i<n;i++){
            int height = arr[i];
            int width = nsi[i] - psi[i] - 1;
            int area = width * height;
            maxArea = max(maxArea , area);
        }
        return maxArea;
    }
};