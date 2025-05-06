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

    string s;

    //cin>>s;
    getline(cin, s);

    for(int i=0; i<s.size(); i++){
        //r no meio da string
        if(i<s.size()-2 && s[i]=='r' && s[i+1]=='r'){
            s[i]='l';
            s.erase(i+1, 1);
        }
        else if(i!=s.size()-1 && s[i]=='r'){
            s[i]='l';
        }
    }

    cout<<s<<endl;
    return 0;
}
