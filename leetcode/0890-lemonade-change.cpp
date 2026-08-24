/*
 * Problem: Lemonade Change (#890)
 * URL: https://leetcode.com/problems/lemonade-change/
 * Language: cpp
 * Runtime: 0 ms | Memory: 87.3 MB
 * Submitted: 2026-08-24T15:24:42 (Submission ID: 2118601216)
 */

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0;
        int t=0;
        for(int x:bills){
            if(x==5){
                f++;
            }
            else if(x==10){
                if(f>0){
                    f--;
                    t++;
                }else{
                    return false;
                }

            }
            else{
                if(f>0 && t>0){
                    f--;
                    t--;
                }else if(f>2){
                    f-=3;
                }
                
                else{
                    return false;
                }
            }
        }
        return true;
        
    }
};
