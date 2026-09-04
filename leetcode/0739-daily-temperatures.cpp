/*
 * Problem: Daily Temperatures (#739)
 * URL: https://leetcode.com/problems/daily-temperatures/
 * Language: cpp
 * Runtime: 20 ms | Memory: 107.3 MB
 * Submitted: 2026-09-04T13:51:18 (Submission ID: 2130756659)
 */

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int> arr(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && temp[st.top()]<temp[i]){
                arr[st.top()]=i-st.top();
                st.pop();                
            }
            st.push(i);
        }
        return arr;
    }
};
