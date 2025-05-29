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
const int INF = 0x3f3f3f3f;
//const ll LINF = 0x3f3f3f3f3f3f3f3fll;
typedef long long ll;


using namespace std;

int main(){
    fastio;
    
    int mega,q ,b , total=1;
    
    cin>>mega;
    b=mega*8*1000000;
    q=0;
    while(b>total){
        total*=2;
        q++;
    }
    cout<<q;

    return 0;
}