#include <iostream>
#include <string.h>
using namespace std;
//variaveis globais sao inicializadas com zero
//variaveis locais nao sao inicializadas, possuem lixo de memoria 
int main(){
    int lixoDeMemoria;
    float lixoDeMemoria2;
    char letra='K';
    char nome[10];
    bool booleano=12>100;
    bool Booleano=true;
    int numero=1;
    float numero2=2;
    float decimal=0.5;
    double decimaDouble=500.45;
    
    float divisao= numero/numero2;
    
    cout<<lixoDeMemoria<<endl;//12>100
    cout<<lixoDeMemoria2<<endl;//12>100
    cout<<booleano<<endl;//12>100
    cout<<divisao<<endl;//'\n' substitui o endl
    cout<<"teste"<<endl;
    cin>>nome;
    cout<<nome<<"  teste333  ";
    return 0;
}