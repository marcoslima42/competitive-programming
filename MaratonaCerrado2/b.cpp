#include<bits/stdc++.h>

using namespace std;

int main(){

    int degree;
    float costa = 0, saad = 0;
    
    cin >> degree; 

    if(degree > 45)
        cout << "Saad" << '\n';
    else if(degree < 45)
        cout << "Costa" << '\n';
    else
        cout << "Ambos" << '\n';

    return 0;
}