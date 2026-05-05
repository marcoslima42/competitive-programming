//https://atcoder.jp/contests/abc454/tasks/abc454_c

#include <bits/stdc++.h>

using namespace std;

//vector<int> adj[300001];
vector<vector<int>> adj;
vector<bool> visited;
int qtd = 0;

void dfs(int node){
    visited[node] = true;
    qtd++;

    for(int i = 0; i < adj[node].size(); i++){
        if(visited[adj[node][i]] == false)
            dfs(adj[node][i]);
    }
}

void fillGraph(int m){
    int a, b;

    for(int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
    }

}

int main(){

    int n, m;

    cin >> n >> m;

    adj.resize(n + 6);
    visited.resize(n + 6);
    //seria n+1, as 5 unidades a mais e para evitar off-by-one

    fillGraph(m);
    
    dfs(1);

    cout << qtd << "\n";
    return 0;
}