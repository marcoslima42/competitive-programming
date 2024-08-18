#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main(){
    int n[10];

    cin>>n[0];
    cout<<"N[0] = "<<n[0]<<endl;

    for(int i=1; i<10; i++){
        n[i]=n[i-1]*2;
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }
    return 0;
}