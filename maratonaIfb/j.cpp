#include <bits/stdc++.h>
//macro para otimizar entrada e saida
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//macro de for
#define rep(i, a, b) for(int i=a; i<b; i++)
//macro para debugar
#define debug(x) cout << #x << "= '" << x << "'\n"
#define endl '\n'
#define f first
#define s second
typedef long long ll;
using namespace std;

int main(){
    fastio;


   int ab=0, c=0;
   cin >> ab >> c;

   bool var = true;

   if((ab == 180 && c == 0) || (c == 180 && ab == 0)){
    cout << "O Claudio ta do outro lado da roda!" << endl;
    var = false;
   }

   if((ab == 90 && c == 270) || (c==90 && ab ==270)){
    cout << "O Claudio ta do outro lado da roda!" << endl;
    var = false;
   }

   if(var){

  int c1=0, ab1=0;


   if(c > 180){
    c1 = c - 360;
   }

   if(ab > 180){
   ab1 = ab - 360;
   }

  if((ab1 > c1) || (ab > c)){
     cout << "O Claudio ta ali embaixo!" << endl;
  } else {
   cout << "Olha o Claudio ali em cima!" << endl;
  }

   }

    return 0;
}