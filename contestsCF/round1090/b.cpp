#include<bits/stdc++.h>

using namespace std;

int main(){

    int t, x, sum=0;
    vector<int> list;

    cin >> t;

    for(int i=0; i<t; i++){
        for(int j=0; j<7; j++){

            cin >> x;

            list.push_back(x);
        }
        sort(list.begin(), list.end());
        for(int j=0; j<6; j++){
            list[j] *= -1;
            sum += list[j];
        }
        cout << sum + list[6] << "\n";   
        sum = 0;
        list.clear();

    }

    return 0;
}