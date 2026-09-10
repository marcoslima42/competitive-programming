//https://leetcode.com/problems/maximum-average-subarray-i/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //soma da primeira janela
        double windowSum = 0; double maxSum;
        for(int i = 0; i < k; i++){
            windowSum += nums[i];
        }

        maxSum = windowSum;

        for(int i = k; i < nums.size(); i++){
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return maxSum / k;
    }
};

int main(){

    vector<int> arr = {0, 1, 1, 3, 3};

    Solution obj;

    cout << obj.findMaxAverage(arr, 4) << "\n";

    return 0;
}