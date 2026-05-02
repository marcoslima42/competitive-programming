#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;

using namespace std;

int main(){ _
    int n, b;
    vector<ll> pontos;
    ll x;

    cin >> n >> b;

    for(int i=0; i<n-1; i++){
        cin >>x;
        pontos.push_back(x);
    }

    int soma = 0, minimo=pontos[0];
    bool positivo =false; 

    for(int i=0; i< n-1; i++){
        if(pontos[i]>0){
            soma+=pontos[i];
            positivo=true;
        }
        else{
            if(minimo<pontos[i])
                minimo =pontos[i];
        }
    }
    if(positivo)
        cout<<b+soma<<endl;
    else if(b + minimo >= 0){
        cout << b + minimo<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    return 0;
}