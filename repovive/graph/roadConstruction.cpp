//https://codeforces.com/problemset/problem/330/B

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m;
    int u, v;
    
    cin >> n >> m;
    vector<bool> center(n, true);


    for(int i = 0; i < m; i++){
        cin >> u >> v;
        center[u-1] = false;
        center[v-1] = false;
    }

    cout << n-1 << "\n";
    int centerCity = 0;

    for(int i = 0; i < n; i++){
        if(center[i] == true){
            centerCity = i+1;
            break;
        }
    }

    for(int i = 0; i < n; i++){
        if(i+1 != centerCity)
            cout << centerCity << " " << i+1 << "\n";
    }
    
    return 0;
    }