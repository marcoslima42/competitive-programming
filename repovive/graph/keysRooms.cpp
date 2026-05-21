//https://leetcode.com/problems/keys-and-rooms/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void dfs(int root, vector<vector<int>> &rooms, vector<bool> &visited){
        visited[root] = true;

        for(auto v : rooms[root]){
            if(!visited[v])
                dfs(v, rooms, visited);
        }
    }
   
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);

        dfs(0, rooms, visited);

        return find(visited.begin(), visited.end(), false) == visited.end() ? true : false;
    }
};
