#include <bits/stdc++.h>

using namespace std;

vector <int> subset;

void printset(){
    cout << "[ ";
    for(int x : subset){
        cout << x << " ";
    }
    cout << "]";
}

void search(int k){
    int n = 3;

    if(k == n+1){
        printset();
        cout << " " << "\n";
        return;
    }
    
        //entrou no ramo superior
        subset.push_back(k);
        search(k+1);
        
        //entrou no ramo inferior
        subset.pop_back();
        search(k+1);
    
    
}

int main(){

    int k = 1;

    search(k);


    return 0;
}