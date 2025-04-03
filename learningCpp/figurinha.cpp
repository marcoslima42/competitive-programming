#include <iostream>
using namespace std;

int euclides(int n1, int n2){
    if(n1%n2==0)//se resto zero o divisor é menor, logo é o mdc
        return n2;
    else//se resto for diferente de zero divido novamente, o maior pelo resto dos dois numeros
        return euclides(n2, n1%n2);
    
}
int main(){
    int n1, n2, qtd;

    cin>>qtd;
    for(int i=0; i<qtd; i++){
        cin>>n1>>n2;
        cout<<euclides(n1, n2)<<"\n";
    }
    
    return 0;
}