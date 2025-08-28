#include <bits/stdc++.h>
#include <algorithm>
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
vector<int>m;

int test(int mid){
    int sum=0;
    // if(mid == 0) mid++;

    for(int i=0; i<m.size(); i++){
        sum += m[i]/mid;
    }  
    
    return sum;
}

int main(){
    fastio; 

    int k, n, x;

    cin>>k>>n;

    rep(i, 0, n){
        cin>>x;
        m.push_back(x);
    }

    int low=0, high,mid;
    auto it=max_element(m.begin(), m.end());
    high = *it;

    while (low<=high){
        mid=(low+high)/2;
        if(test(mid)>=k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<mid-1<<endl;

    return 0;
}
