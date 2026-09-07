#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    deque<char> fila;
    string resenha = "AB";

    int tipo;
    char time;

    cin >> n;

    long long totalResenhas = 0;
    long long qtdA = 0;
    long long qtdB = 0;


    while(n--){
        cin >> tipo;

        if(tipo == 1){
            cin >> time;
            fila.push_back(time);
            if(time == 'A'){
                qtdA++;
            }
            else{
                qtdB++;
                totalResenhas += qtdA;
            }
        }
        else if(tipo == 2){
            cin >> time;
            fila.push_front(time);
            if(time == 'A'){
                qtdA++;
                totalResenhas += qtdB;
            }
            else{
                qtdB++;
            }
        } 
        else if(tipo == 3){
            time = fila.back();
            fila.pop_back();

            if(time == 'A'){
                qtdA--;
            }
            else{
                qtdB--;
                totalResenhas -= qtdA;
            }
        } 
        else{
            time = fila.front();

            fila.pop_front();
            if(time == 'A'){
                qtdA--;
                totalResenhas -= qtdB;
            }
            else{
                qtdB--;
                
            }
        } 


        cout << totalResenhas << "\n";
    }


    return 0;
}



