#include <bits/stdc++.h>

#define REP(i, a, b) for(int i=a; i<b; i++)
#define _ ios_base::sync__with_stdio(0); cin.tie(0);

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e8;
const int MOD = 1e9+7;
#define endl "\n"

using namespace std;
vector<vector<bool>> m(11, vector<bool>(11, false));
int n, dir, tam, x, y;

bool preencher(){
    //preencher
    if(dir){ //vertical

        REP(j, 0, tam){
            
            if((j+x<=10 && j+x>=1) && (y<=10 && y>=1)){
                if(m[j+x][y]==true)
                    return true;
                else{
                    m[j+x][y]=true;
                }
            }
            else
                return true;
        }
    }
    else{
        REP(j, 0, tam){
            if((j+y<=10 && j+y>=1) && (x<=10 && x>=1)){
                if(m[x][j+y]==true)
                    return true;
                else{
                    m[x][j+y]=true;
                }
            }
            else 
                return true;
        }
    }
    return false;
}

int main(){
    cin>>n;
    int chocou=false;

    REP(i, 0, n){
        cin>>dir>>tam>>x>>y;
        
        if(preencher()){
            chocou=true;
            break;
        }
    }

    if(!chocou)  cout<<"Y"<<endl;
    else    cout<<"N"<<endl;
    return 0;
}