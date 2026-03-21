#include <bits/stdc++.h>

using namespace std;

int main() {

    set<string> jewel;
    string s;
    int ans = 0; 
    
    while(cin >> s){
        jewel.insert(s);
    }
    
    cout << jewel.size() << "\n";

    return 0;
}