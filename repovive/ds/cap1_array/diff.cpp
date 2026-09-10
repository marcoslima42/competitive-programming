#include<bits/stdc++.h>

using namespace std;

int main(){
    
    //mudar indice 1 ao indice 3 indice 
    int start = 1; int end = 3; int v = 3;
    vector<int> diff = {0, 0, 0, 0, 0};
    int size = diff.size();

    //setar no inicio do intervalo
    diff[start] += v;
    //setar no fim do intervalo 
    if(end + 1 < size)
        diff[end + 1] -= v;

    for(int i = 1; i < size; i++){  
        diff[i] += diff[i - 1];
    }  

    for(auto x : diff){
        cout << x << " ";
    }
    return 0;
}