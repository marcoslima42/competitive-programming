#include <iostream>
using namespace std;
#define ordem 12

int main(){
    float m[ordem][ordem], linha, soma=0;
    char oper;

    cin>>linha>>oper;
    for(int i=0; i<ordem; i++)
        for(int j=0; j<ordem; j++){
            cin>>m[i][j];
            if(i==linha)
                soma+=m[i][j];
        }
    
    if(oper=='S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma/12);
    
    return 0;
}