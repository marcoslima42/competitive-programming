#include <bits/stdc++.h>

using namespace std;

void signalBuy(int cn, int vn){
    float in1 = (float(cn - vn) / (cn + vn));

    if (in1 > 0) cout << "COMPRA\n";
    else if(in1 < 0)  cout << "VENDA\n";
    else cout << "NEUTRO\n";
}

int main(){
    int n; cin >> n;
    vector<pair<long long, long long>> levels;
    vector<pair<long long,long long>> prefixSum(1e5);

    for(int i = 0; i < n; i++){
        int cn, vn;

        cin >> cn >> vn;
        levels.push_back({cn, vn});
    }
    
    prefixSum[0].first = levels[0].first;
    prefixSum[0].second = levels[0].second;


    for(int i = 1; i < n; i++){
        prefixSum[i].first = prefixSum[i - 1].first + levels[i].first;
        prefixSum[i].second = prefixSum[i - 1].second + levels[i].second;
    }

    int query, q;

    cin >> query; 

    for(int i = 0; i < query; i++){
        cin >> q;
        signalBuy(prefixSum[q - 1].first, prefixSum[q - 1].second);
    }

    return 0;
}