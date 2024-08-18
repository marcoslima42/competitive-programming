#include <iostream>
#include <iomanip>
using namespace std;

float salario[4]={400, 800, 1200, 2000};
int percentual[5]={15, 12, 10, 7, 4};

float ajuste(int index, float x){
    return x*(percentual[index]/100.0);
}

void imprimir(int index, float x){
    //cout << fixed << setprecision(2);
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<x+ajuste(index, x)<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<ajuste(index, x)<<endl;
    cout<<"Em percentual: "<<percentual[index]<<" %"<<endl;
}

int main(){  
    float x;

    cin>>x;
    if(x<=salario[0])
        imprimir(0,x);
    else if(x<=salario[1])
        imprimir(1,x);
    else if(x<=salario[2])
        imprimir(2,x);
    else if(x<=salario[3])
        imprimir(3,x);
    else
        imprimir(4,x);
    return 0;
}