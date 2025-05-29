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

    int c, g;

    cin>>c>>g;

    if(c==1){
        cout<<"vivo e morto"<<endl;
    }
    else if(g==1){
        cout<<"vivo"<<endl;
    }
    else{
        cout<<"morto"<<endl;
    }
    return 0;
}
