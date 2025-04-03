#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    vector<int>fechadura;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        fechadura.push_back(x);
    }

    int movimentos;
    for(int i=0; i<n-1; i++){
        while(fechadura[i]!=m){
            fechadura[i]++;
            fechadura[i+1]++;
            movimentos++;
        }

    }

    return 0;
}