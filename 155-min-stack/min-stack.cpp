class MinStack {
    stack<long long>  st;
    long long mn;
public:
    MinStack() {
        mn = LLONG_MAX;
    }
    
    void push(int value) {
        long long val = value;
        if(st.size() == 0){
            st.push(val);
            mn = val;
        }
        else{
            if(val >= mn) st.push(val);
            else{
                st.push(val+(val-mn));
                mn = val;
            }
        }
    }
    
    void pop() {
        if(st.top() < mn){
            long long oldMin = 2 * mn - st.top();
            mn = oldMin;
        }
        st.pop();
    }
    
    int top() {
        if(st.top() < mn){
            return mn;
        }
        else return st.top();
    }
    
    int getMin() {
        return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */