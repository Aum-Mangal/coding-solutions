/*
 * Problem: Evaluate Reverse Polish Notation (#150)
 * URL: https://leetcode.com/problems/evaluate-reverse-polish-notation/
 * Language: cpp
 * Runtime: 0 ms | Memory: 17.1 MB
 * Submitted: 2026-08-30T06:30:00 (Submission ID: 2124718764)
 */

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(const string& c : tokens){
            if(c=="+"){
                int a= st.top();st.pop();
                int b= st.top();st.pop();
                st.push(a+b);
            }
            else if(c=="-"){
                int a= st.top();st.pop();
                int b= st.top();st.pop();
                st.push(b-a);
            }
            else if(c=="*"){
                int a= st.top();st.pop();
                int b= st.top();st.pop();
                st.push(a*b);
            }
            else if(c=="/"){
                int a= st.top();st.pop();
                int b= st.top();st.pop();
                st.push(b/a);
            }
            else st.push(stoi(c));
        }
        return st.top();
        
    }
};
