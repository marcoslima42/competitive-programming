#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    void dfs(int root, vector<vector<int>> &isConnected, vector<bool> &visited){
        visited[root] = true;

        for(int v : isConnected[root])
            if(!visited[v])
                dfs(v, isConnected, visited);
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> visited(201, false);
        int count = 0;

        for(int i=1; i<200; i++)
            if(!visited[i]){
                count++;
                dfs(i, isConnected, visited);
            }

        return count;
    }
};
