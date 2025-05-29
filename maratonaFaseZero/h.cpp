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

bool isPalindrome(const string& s) {
    return s == string(s.rbegin(),s.rend());
}

int bin(int num, int *binario){
    int i=0;
    while(num>0){
		binario[i] = num % 2;
		num /= 2;
		i++;
	}
    return i;
}

int main(){
    fastio; 

    int x,num;
    cin>>x;
    num=x;
    int binario[100000];
    int i=0;

    string sPalin;
    while(true){
        sPalin.clear();
        i=bin(num, binario);
        
        for(int j=i-1; j>=0; j--){
            sPalin+=to_string(binario[j]);
        }
        if(isPalindrome(sPalin)==1)
            break;

        num--;
    }

    // for(int j=i-1; j>=0; j--){
    //     cout<<binario[j];
    // }
    cout<<num<<endl;
    return 0;
}