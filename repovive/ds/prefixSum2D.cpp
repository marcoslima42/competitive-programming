#include <bits/stdc++.h>

using namespace std;

class NumMatrix {
public:
    vector<vector<int>> prefix;

    NumMatrix(vector<vector<int>>& matrix) {
        //inicialiazacao
        int m = matrix.size();
        int n = matrix[0].size();

        prefix.resize(m + 1, vector<int>(n + 1, 0));

        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                prefix[i][j] = matrix[i - 1][j - 1]
                             + prefix[i - 1][j]
                             + prefix[i][j - 1]
                             - prefix[i - 1][j - 1]; 
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefix[row2 + 1][col2 + 1]
             - prefix[row1][col2 + 1]
             - prefix[row2 + 1][col1]
             + prefix[row1][col1];  
    }
};

int main(){
    vector<vector<int>> matrix = {
        //[[[3, 0, 1, 4, 2], [5, 6, 3, 2, 1], [1, 2, 0, 1, 5], [4, 1, 0, 1, 7], [1, 0, 3, 0, 5]]]
        {3, 0, 1, 4, 2},
        {5, 6, 3, 2, 1},
        {1, 2, 0, 1, 5},
        {4, 1, 0, 1, 7},
        {1, 0, 3, 0, 5}
    };
    NumMatrix obj(matrix);

    //[2, 1, 4, 3], [1, 1, 2, 2], [1, 2, 2, 4]
    cout << obj.sumRegion(2, 1, 4, 3) << endl;
    cout << obj.sumRegion(1, 1, 2, 2) << endl;
    cout << obj.sumRegion(1, 2, 2, 4) << endl;
    return 0;
}