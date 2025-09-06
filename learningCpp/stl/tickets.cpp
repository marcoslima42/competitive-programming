#include <bits/stdc++.h>

#define REP(i, a, b) for ( int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e8;
const int MOD = 1e9+7;


using namespace std;
vector<int> clientes;
multiset<int> bilhetes;

int main(){ _

    int n, m;
    int value;
    cin >> n >> m;

    REP(i, 0, n){
        cin >> value;
        bilhetes.insert(value);
    }

    REP(i, 0, m){
        cin >> value;
        clientes.push_back(value);
    }

    for(int element : clientes){
        auto it = bilhetes.upper_bound(element);
        
        if(it == bilhetes.begin()) cout << "-1" << endl;
        else{
            --it;
            cout << *it << endl;
            bilhetes.erase(it);
        }
            
    }
    
    return 0;
}
