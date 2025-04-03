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
    

    int cases=0;
    cin>>cases;

    rep(cont, 0, cases){
        int begin, end;
        string strip; //vector<char> strip;
        cin>>end;
        cin>>strip;

        rep(cont2, 0, end){
            if(strip[cont2]=='B'){
                begin=cont2;
                break;
            }
        }
        
        int i=end-1, flag=0;
        do{
            if(strip[i]=='B'){
                end=i;
                flag=1;
            }
            i--;
        }while(flag!=1);

        cout<<end-begin+1<<endl;
    }

    return 0;
}
