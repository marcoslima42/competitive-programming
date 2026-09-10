//https://leetcode.com/problems/valid-parentheses/description/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> pilha;
        unordered_map<char, char> brackets {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };

        for(char c : s){

            if(brackets.count(c))
                pilha.push(c);
            else{

                if(pilha.empty()) return false;

                char top = pilha.top();
                pilha.pop();

                if(brackets[top] != c)
                    return false;
            }
        }

        return pilha.empty();
    }
};

int main(){



    return 0;
}