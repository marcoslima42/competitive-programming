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
    string galinha[]={"galinha", "gallina", "huhn", "hen ou chicken", "poule", "tarnegolet", "farkha", "gallina", "kura", "kana", "kuritsa", "niwatori", "to fraca"};
    string pais;
    getline(cin, pais);

    if(pais=="Brasil")
        cout<<galinha[0]<<endl;
    else if(pais=="Argentina")
        cout<<galinha[1]<<endl;
    else if(pais=="Alemanha")
        cout<<galinha[2]<<endl;
    else if(pais=="Estados Unidos")
        cout<<galinha[3]<<endl;
    else if(pais=="Franca")
        cout<<galinha[4]<<endl;
    else if(pais=="Israel")
        cout<<galinha[5]<<endl;
    else if(pais=="Egito")
        cout<<galinha[6]<<endl;
    else if(pais=="Italia")
        cout<<galinha[7]<<endl;
    else if(pais=="Polonia")
        cout<<galinha[8]<<endl;
    else if(pais=="Finlandia")
        cout<<galinha[9]<<endl;
    else if(pais=="Russia")
        cout<<galinha[10]<<endl;
    else if(pais=="Japao")
        cout<<galinha[11]<<endl;
    else if(pais=="Angola")
        cout<<galinha[12]<<endl;
    return 0;
}