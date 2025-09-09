#include <bits/stdc++.h>

#define REP(i, a, b) for ( int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e8;
const int MOD = 1e9+7;


using namespace std;
vector<int> desejo, tamApart;

int main(){ _
    int n, m, k;
    int x;

    cin >> n >> m >> k;

    REP(i, 0, n){
        cin >> x;
        desejo.push_back(x);
    }

    REP(i, 0, m){
        cin >> x;
        tamApart.push_back(x);
    }
    sort(desejo.begin(), desejo.end());
    sort(tamApart.begin(), tamApart.end());

    int i=0, j=0, cont=0;
    while(i < n && j < m){
        if(tamApart[j] < desejo[i]-k)
            j++;
        else if(tamApart[j] > desejo[i]+k)
            i++;
        else{
            i++; j++; cont++;
        }
    }


    cout << cont << endl;
    
    return 0;
}