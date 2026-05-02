#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int t;
    int tam = 0;
    bool valid = true;
    cin >> t;
    

    for(int i = 0; i < t; i++){
        tam = 0; valid = true;
        cin >> s;
        for(int j =0; j < s.length(); j++){
            if(s[j] == '\\'){
                if(j + 1 >=  s.length()){
                    valid = false;
                    break;
                }
                    
                
                if(s[j+1] == '0')
                    break;
                else if(s[j+1] == '\\'){
                    tam++;
                    j++;
                }
            }
            else{
                tam++;
            }
        }

        if(valid){
            cout << tam << '\n';
        }
        else{
            cout << "INVALID" << '\n';
        }
    }

    return 0;
}