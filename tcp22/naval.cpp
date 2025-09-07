#include <iostream>
#include <vector>
#include <utility>

#define REP(i, a, b) for(int i=a; i<b; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e8;
const int MOD = 1e9+7;
#define endl "\n"
#define f first
#define s second
#define pb push_back


using namespace std;

vector<pair<int, int>> navio(10);
vector<pair<int, int>> posi(10);

int main() {
    int n;
    cin >> n;

    // tabuleiro 11x11 (para usar índices de 1..10)
    vector<vector<int>> tab(11, vector<int>(11, 0));

    for (int i = 0; i < n; i++) {
        int D, L, R, C;
        cin >> D >> L >> R >> C;

        if (D == 0) { // horizontal
            if (C + L - 1 > 10) { // passa da borda
                cout << "N\n";
                return 0;
            }
            for (int k = 0; k < L; k++) {
                if (tab[R][C+k] == 1) { // já ocupado
                    cout << "N\n";
                    return 0;
                }
                tab[R][C+k] = 1;
            }
        } else { // vertical
            if (R + L - 1 > 10) { // passa da borda
                cout << "N\n";
                return 0;
            }
            for (int k = 0; k < L; k++) {
                if (tab[R+k][C] == 1) { // já ocupado
                    cout << "N\n";
                    return 0;
                }
                tab[R+k][C] = 1;
            }
        }
    }

    cout << "Y\n"; // se todos couberam e não houve colisão
    return 0;
}
