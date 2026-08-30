/*
 * Problem: Min Stack (#155)
 * URL: https://leetcode.com/problems/min-stack/
 * Language: cpp
 * Runtime: 58 ms | Memory: 151.1 MB
 * Submitted: 2026-08-30T06:01:18 (Submission ID: 2124691293)
 */

class MinStack {
public:
    stack<int> st;
    stack<int> minstack;

    MinStack() {
        
        
    }
    
    void push(int val) {
        st.push(val);
        val = min(val, minstack.empty() ? val : minstack.top());
        minstack.push(val);
    }
    
    void pop() {
        st.pop();
        minstack.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        // stack<int> temp;
        // int minn=st.top();
        // while(st.size()){
        //      minn=min(minn,st.top());
        //     temp.push(st.top());
        //     st.pop();
        // }
        // while(temp.size()){
        //     st.push(temp.top());
        //         temp.pop();
            
        // }
        // return minn;
        return minstack.top();
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
