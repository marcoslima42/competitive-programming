#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0; int right = numbers.size() - 1;

        while(left < right){
            int sum = numbers[left] + numbers[right];
            
            if(sum == target){
                return {left, right};                    
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }

        return {};
    }
};

int main(){

    Solution obj;

    vector<int> arr = {2,7,11,15};

    //sort(arr.begin(), arr.end());

    int target = 9;
    
    vector<int> res;
    res = obj.twoSum(arr, target);

    for(auto x : res){
        cout << x << " ";
    }

    return 0;
}