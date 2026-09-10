//https://leetcode.com/problems/daily-temperatures/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int> answer(n, 0);
        stack<int> indices;

        for(int i = 0; i < n; i++){
            while(!indices.empty() and temperatures[i] > temperatures[indices.top()]){
                int j = indices.top();
                indices.pop();
                answer[j] = i - j;
            }

            indices.push(i);
        }

        return answer;
    }
};

int main(){



    return 0;
}