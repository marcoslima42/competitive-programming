#include <bits/stdc++.h>

#define REP(i, a, b) for (int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e8;
const int MOD = 1e9+7;

using namespace std;

int fibonacci(int n){
    int atual = 1, ante=1, aux=0;
    if(n == 1 || n == 2)    return 1;
    for(int i=2; i<n; i++){
        aux = atual;
        atual += ante;
        ante = aux;
    }

    return atual;
}

int main() { _
    int n=0;
    cin >> n;
    cout << fibonacci(n+1);


    return 0;
}