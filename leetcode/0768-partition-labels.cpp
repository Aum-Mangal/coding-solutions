/*
 * Problem: Partition Labels (#768)
 * URL: https://leetcode.com/problems/partition-labels/
 * Language: cpp
 * Runtime: 0 ms | Memory: 8.9 MB
 * Submitted: 2026-08-22T15:22:36 (Submission ID: 2116294130)
 */

class Solution {
public:
    vector<int> partitionLabels(string s) {
          //unordered_map<char,int> l;
          vector<int> last(26,0);
          int n=s.length(); 
          for(int i=0;i<n;i++){
            last[s[i]-'a']=i;
          }
          vector<int> par;
          int l=0; 
          int size=0;
          for(int i=0;i<n;i++){
            size++;
            l=max(l,last[s[i]-'a']);
            if(i==l){
                par.push_back(size);
                size=0;
            }

          }
          return par;

    }
};
