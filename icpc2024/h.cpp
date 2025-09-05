#include <bits/stdc++.h>

#define REP(i, a, b) for (int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e8;
const int MOD = 1e9+7;


using namespace std;

string M, N;

void zerarBits(){
    bool loop = true; 
    int pos = 0;

    //mensagem
    while(loop){
        size_t pos = M.find('*');
        if (pos != string::npos) {
            M[pos] = '0';
        } else {
            loop = false;
        }
    }
    //n
    while(loop){
        size_t pos = N.find('*');
        if (pos != string::npos) {
            M[pos] = '0';
        } else {
            loop = false;
        }
    }
}
int verificar(){
    //converter
    long long a = stoi(M, nullptr, 2);
    long long b = stoi(N, nullptr, 2);

    if(a%b == 0) return 1;
    
    return 0;
}

int addBits(){
    //converter
    long long a = stoi(M, nullptr, 2);

    a++;
    M = bitset<500>(a).to_string();
    
    return 0;
}

int main() { _
    bool loop2;
    cin >> M >> N;
    zerarBits();

    while(!verificar()){
        addBits();
        
    }

    cout << M << '\n';


    return 0;
}