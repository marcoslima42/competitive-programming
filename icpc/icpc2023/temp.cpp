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
vector<ll> vet;
vector<ll> sum;

int main(){ _
    int n, x;
    int soma;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x;
        vet.push_back(x);
    }

    ll par=1, impar=0;
    for(int i=0; i<n; i++){
        soma += vet[i];
        if(soma%2 == 0) par++;
        else impar++;
    }

    cout<<par*impar<<endl;
    return 0;
}
