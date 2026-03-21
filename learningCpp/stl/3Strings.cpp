#include <bits/stdc++.h>

using namespace std;


int main(){
    string a, b, c;
    int n;
    cin >> n; 
    
    while(n--){
        cin >> a >> b >> c;
        bool flag = true;

        for(int i = 0; i < a.size(); i++){
            if(a[i] != c[i] && b[i] != c[i]){
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}