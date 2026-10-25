class Solution {
public:
    int calPoints(vector<string>& arr) {
        stack<int> st;
        for(string op : arr){
            if(op == "C") st.pop();
            else if(op == "D"){
                st.push(2*st.top());
            }
            else if(op == "+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.push(x);
                st.push(x+y);
            }
            else{
                st.push(stoi(op));
            }
        }

        int sum = 0;
        while(st.size() != 0){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};