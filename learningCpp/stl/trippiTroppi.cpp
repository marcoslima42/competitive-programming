#include <bits/stdc++.h>

#define REP(i, a, b)    for(int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fl;

using namespace std;

int main(){
    string s;
    string ans;
    int t; 
    cin>>t;
    cin.ignore();

    REP(i, 0, t){
        getline(cin, s);
        ans+=s[0];
        for(int j=1; s[j]!= '\0'; j++){
            if(s[j] == ' ')
                ans+=s[j+1];
        }
        cout<<ans+'\n';
        ans.clear();
    }

    return 0;
}