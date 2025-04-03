#include <bits/stdc++.h>
//macro para otimizar entrada e saida
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//macro de for
#define rep(i, a, b) for(int i=a; i<b; i++)
//macro para debugar
#define debug(x) cout << #x << "= '" << x << "'\n"
#define endl '\n'
#define f first
#define s second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;



using namespace std;

int main(){
    fastio;

    int n;

    //tratar eof
    while(cin>>n){
        vector<pair<int, int>> botas(61);//inicaliza com zero
        int casos=0;
        int tam, resp=0;
        char pe;
        
        while(casos<n){
            cin>>tam>>pe;

            if(pe=='E') botas[tam].f++;
            else botas[tam].s++;
            casos++;
        }
        
        rep(cont, 0, botas.size()){
            resp+=min(botas[cont].f, botas[cont].s);
        }
        cout<<resp<<endl;
    }

    return 0;
}
