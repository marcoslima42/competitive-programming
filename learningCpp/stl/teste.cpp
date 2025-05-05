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
    string str={"hello"};
    string str2={"WOLD"};

    rep(i, 0, 3){
        cout<<(char)(str[i]+'a')<<endl;
        //cout<<(char)(str[i]+'A')<<endl;
    }



    return 0;
}
