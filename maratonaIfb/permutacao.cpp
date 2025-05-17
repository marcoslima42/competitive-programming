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
const int INF = 0x3f3f3f3f;
//const ll LINF = 0x3f3f3f3f3f3f3f3fll;
typedef long long ll;


using namespace std;

int main(){
    fastio;

   /* A entrada consiste em uma única linha contendo um número inteiro n (1 ≤ n ≤ 106), representando o tamanho da 
   fila que o rei deseja organizar   */
   int n;
   cin >> n;

   /* Imprima uma permutação dos números de 1 a n onde nenhum par de elementos adjacentes tenha diferença igual a 1. 
   Se não for possível atender ao pedido do rei, imprima NO SOLUTION.
Qualquer permutação que atenda as restrições do enunciado será aceita pelo juiz. */


    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
    } else {
        // Imprime pares
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        // Imprime ímpares
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}