#include <bits/stdc++.h>

using namespace std;

int main(){

    stack<int> pilha;
    //adicionando no topo
    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
    pilha.push(4);

    //vendo topo
    cout << "topo: " << pilha.top() << "\n";
    
    //removendo topo
    
    /* o metodo pop e void
    while(!pilha.empty()){
        cout << pilha.pop() << "\n";
    }
    */

    pilha.pop();
    cout << pilha.top() << "\n";

    return 0;
}