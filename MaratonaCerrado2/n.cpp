#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int horasIn, horasFim = 0;
    int minutosIn = 0, minutosFim = 0;

    int horasTotal;
    int minTotal;

    horasFim = stoi(s1.substr(0,2));
    minutosFim = stoi(s1.substr(3,2));

    horasIn = stoi(s2.substr(0,2));
    minutosIn = stoi(s2.substr(3,2));

    int totalFim = (horasFim * 60) + minutosFim;
    int totalIn = (horasIn * 60) + minutosIn;
    int dif = totalFim - totalIn;

    
    horasTotal = dif/60;
    minTotal = dif % 60;

    if(horasTotal < 10){
        cout << "0";
        cout << horasTotal;
    }
    else{
        cout << horasTotal;
    }
    cout << ":";
    if(minTotal < 10){
        cout << "0";
        cout << minTotal << '\n';
    }
    else{
        cout << minTotal << '\n';
    }

    return 0;
}