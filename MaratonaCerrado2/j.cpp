#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<bool> pos(4);
    pos[2] = true;
    int qtd = 0;
    string s;  
    int ans = 0;

    cin >> qtd;
    cin >> s;

    for(int i=0; i<qtd; i++){
        if(pos[1] == true && s[i] == 'E')
            ans++;
        if(pos[3] == true && s[i] == 'D')
            ans++;

        if(s[i] == 'C'){
            pos[1] = pos[3] = false;
            pos[2] = true;
            ans++;
        }

        if(s[i] == 'E' && pos[2] == true){
            ans++;
            pos[1] = true;
            pos[2] = false;
        } 

        if(s[i] == 'D' && pos[2] == true){
            ans++;
            pos[3] = true;
            pos[2] = false;
        }

        if(s[i] == 'D' && pos[1] == true){
            pos[2] = true;
            pos[1] = pos[3] = false; 
        }    
        
        if(s[i] == 'E' && pos[3] == true){
            pos[2] = true;
            pos[1] = pos[3] = false; 
        }    

    }

    cout << ans << '\n';

    return 0;
}