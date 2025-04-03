#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float qtd, tabela[5]={4, 4.5, 5, 2, 1.5};
    int cod;

    cin>>cod>>qtd;
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<tabela[cod-1]*qtd<<endl;
    return 0;
}