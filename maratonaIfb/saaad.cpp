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
    string daniel;
    getline(cin, daniel);

    size_t pos=0;
    // size_t posSAAD=0;
    //minusculas
    if(daniel.find("Daniel")!=string::npos){
        while((pos=daniel.find("Sad", pos)) != string::npos) {
            // debug(daniel[pos]);
            // posSAAD=pos
            if(daniel[pos+3] == ' ' || daniel[pos+3] =='\0' || daniel[pos+3] ==',' || daniel[pos+3] =='.')
                daniel.replace(pos, 3, "Saad");
            

            pos += 4;
        }
    }

    if(daniel.find("daniel")!=string::npos){
        while((pos=daniel.find("sad", pos)) != string::npos) {
            // debug(daniel[pos]);
            // debug(daniel[pos+1]);
            // debug(daniel[pos+2]);
            // debug(daniel[pos+3]);
            if(daniel[pos+3] == ' ' || daniel[pos+3] =='\0' || daniel[pos+3] ==',' || daniel[pos+3] =='.')
                daniel.replace(pos, 3, "saad");
            
            pos += 4;
        }

    }
    //maiuscuulas
    if(daniel.find("DANIEL")!=string::npos){
        while((pos=daniel.find("SAD", pos)) != string::npos) {
            
            if(daniel[pos+3] == ' ' || daniel[pos+3] =='\0' || daniel[pos+3] ==',' || daniel[pos+3] =='.')
                daniel.replace(pos, 3, "SAAD");
            pos += 4;
        }
    }

    cout<<daniel<<endl;
    return 0;
}
