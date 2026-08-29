/*
 * Problem: Baseball Game (#682)
 * URL: https://leetcode.com/problems/baseball-game/
 * Language: cpp
 * Runtime: 0 ms | Memory: 13 MB
 * Submitted: 2026-08-29T15:37:21 (Submission ID: 2124047658)
 */

class Solution {
public:
    int calPoints(vector<string>& ops)
    {
        int value1;
        int value2;
        int ans = 0;
        stack<int>stk;
        
        for(string i:ops)
        {
            if(i == "C")
            {
                stk.pop();
            }
            else if(i == "D")
            {
                stk.push(stk.top()*2);
            }
            else if(i == "+")
            {
                value1 = stk.top();
                stk.pop();
                value2 = stk.top();
                stk.push(value1);
                stk.push(value1 + value2);
            }
            else
            {
                stk.push(stoi(i)); 
            }
        }
        while(stk.size() != 0)
        {
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};
