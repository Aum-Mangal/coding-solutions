/*
 * Problem: Rotating the Box (#1972)
 * URL: https://leetcode.com/problems/rotating-the-box/
 * Language: cpp
 * Runtime: 78 ms | Memory: 56.9 MB
 * Submitted: 2026-09-03T14:19:40 (Submission ID: 2129699012)
 */

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
          int m=box.size();
          int n=box[0].size();
          vector<vector<char>> rot(n, vector<char>(m));
          for(int i=0;i<m;i++){
            for(int j=n-1;j>=0;j--){
                if(box[i][j]=='#'){
                    int k=j;
                    while (k + 1 < n && box[i][k + 1] == '.') {
                        box[i][k] = '.';
                        box[i][k + 1] = '#';
                        k++;
                    }
                }
            }
          }
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rot[i][j]=box[m-1-j][i];
            }
          }
        //   for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<rot[i][j];
        //     }
        //     cout<<endl;
        //   }

          return rot;
    }
};
