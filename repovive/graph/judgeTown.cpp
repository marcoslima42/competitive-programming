//https://leetcode.com/problems/find-the-town-judge/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> in(n+1), out(n+1);
        int judge = -1;

        for(int i = 0; i < trust.size(); i++){
            out[trust[i][0]]++;
            in[trust[i][1]]++;
        }
        for(int i = 1; i < in.size(); i++){
            if((in[i] == n-1) && (out[i] == 0))
                return i;
        }
        return judge;
    }
};