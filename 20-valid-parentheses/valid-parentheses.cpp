class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2 == 1) return false;

        stack<char> st;
        for(char c : s){
            if(c == '(' or c == '[' or c == '{'){
                st.push(c);
            }
            else{ //for closing bracket
                if(st.size()==0) return false;
                if(c == ')' and st.top() == '(') st.pop();
                else if(c == '}' and st.top() == '{') st.pop();
                else if(c == ']' and st.top() == '[') st.pop();
                else return false;
            }
        }
        return (st.size() == 0);
    }
};