/*
 * Problem: Valid Parentheses (#20)
 * URL: https://leetcode.com/problems/valid-parentheses/
 * Language: cpp
 * Runtime: 0 ms | Memory: 8.9 MB
 * Submitted: 2026-08-28T06:24:57 (Submission ID: 2122612460)
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c=='('||c=='{'||c=='['){
                st.push(c);
            }
        
            else{
            if(st.empty()){
                return false;
            }
            char top =st.top();
            st.pop();
            if(c==')' && top!='('){
                return false;
            }
            if(c==']' && top!='[') return false;
            if(c=='}' && top!='{') return false;
            }
        }
        return st.empty();


    }
};
