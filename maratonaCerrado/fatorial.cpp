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

long long fatorial(int n){
    long long res=1;
    for(int i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

int main(){
    fastio; 

    int x;
    cin>>x;
    
    int n=fatorial(x);
    int i=0;

    string s=to_string(n);
    reverse(s.begin(), s.end());

    do{
        
        i++;
    }while(s[i]!='0');


    cout<<s[i]<<endl;

    return 0;
}
