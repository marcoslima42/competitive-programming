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
set<int> intervalos;
// vector<int> semaforo; 
multiset<int> maior;

int main(){ _
    int x, n;
    int value;

    cin >> x >> n;
    intervalos.insert(0);
    intervalos.insert(x);

    REP(i, 0, n){
        cin >> value;
        intervalos.insert(value);

        auto it1 = intervalos.upper_bound(value);
        maior.insert(*it1 - value);

        auto it2 = intervalos.lower_bound(value);
        --it2;
        maior.insert(value - *it2);

        //remover tam
        int maiorAntigo = *it1 - *it2;
        auto itMaiorAntigo = maior.find(maiorAntigo);
        if(itMaiorAntigo != maior.end())
            maior.erase(itMaiorAntigo);

        cout << *maior.rbegin() << endl;
    }   
    
    return 0;
}
