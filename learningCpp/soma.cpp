#include <iostream>
using namespace std;

int main() {
    int x, soma=0;
    for(int i=0; i<2; i++){
        cin>>x;
        soma+=x;
    }
    cout<<"SOMA = "<<soma<<endl;
    
    return 0;
}