//https://leetcode.com/problems/next-greater-element-i/description/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> pilha;

        for(auto num : nums2){
            while(!pilha.empty() and num > pilha.top()){
                int popped = pilha.top();
                pilha.pop();

                nextGreater[popped] = num;
            }

            pilha.push(num);
        }
        
        vector<int> result(nums1.size(), 0);

        for(int i = 0; i < nums1.size(); i++){
            if(nextGreater.count(nums1[i]))
                result[i] = nextGreater[nums1[i]];
            else
                result[i] = -1;
        }

        return result;
    }
};

int main(){



    return 0;
}