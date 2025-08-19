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

    unordered_map<string, string> galinha = {
        {"Brasil", "galinha"},
        {"Argentina", "gallina"},
        {"Alemanha", "huhn"},
        {"Estados Unidos", "hen ou chicken"},
        {"Franca", "poule"},
        {"Israel", "tarnegolet"},
        {"Egito", "farkha"},
        {"Italia", "gallina"},
        {"Polonia", "kura"},
        {"Finlandia", "kana"},
        {"Russia", "kuritsa"},
        {"Japao", "niwatori"},
        {"Angola", "to fraca"}
    };
    string pais;
    getline(cin, pais);

    auto index = galinha.find(pais);

    if(index != galinha.end())
        cout<<index->s<<endl;
        
    return 0;
}