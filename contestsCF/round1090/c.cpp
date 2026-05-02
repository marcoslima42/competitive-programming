#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, n, total=0;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n;
        int maior = n + 1;
        int menor = 1;
        for(int j=0; j<n; j++){
            cout << menor << " " << maior << " " << maior + 1 << " ";
            maior+=2;
            menor++;
        }
    }
    return 0;
}