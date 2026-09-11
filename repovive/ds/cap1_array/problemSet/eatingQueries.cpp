#include <bits/stdc++.h>

using namespace std;

vector<int> buildPrefix(vector<int> &candys){
    int tam = candys.size();
    vector<int> pref(tam + 1, 0);

    for(int i = 0; i < tam; i++){
        pref[i + 1] = candys[i] + pref[i];
    }

    return pref;
}

int main(){

    
    int t, n, q, xi;
    
    cin >> t;
    
    while(t--){
        vector<int> candys;
        vector<int> queries;

        cin >> n >> q;

        while(n--){
            cin >> xi;
            candys.push_back(xi);            
        }
        for(int i = 0; i < q; i++){
            cin >>xi;
            queries.push_back(xi);
        }
        //decrescente com r antes de begin e end
        sort(candys.rbegin(),candys.rend());

        vector<int> pref = buildPrefix(candys);

        for(int i = 0; i < q; i++){
            auto it = lower_bound(pref.begin() + 1, pref.end(), queries[i]);
            
            if(it == pref.end())
            cout << "-1" << "\n";
            else{
                int ans = it - pref.begin();
                cout << ans << "\n";

            }
        }
    }

    return 0;
}