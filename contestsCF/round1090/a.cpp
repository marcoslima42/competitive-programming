#include<bits/stdc++.h>
using namespace std;
int main(){

    int x, y, t;


    cin >> t;

    for(int i=0; i<t; i++){
        cin >> x;
        if(x!=67)
            cout << x+1 << "\n";
        else    
            cout << x << "\n";
    }

    
    return 0;
}