#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> index;
        int left = 0; int right = numbers.size() - 1;
        while(left < right){
            
            if(numbers[left] + numbers[right] < target){
                left++;
            }
            else if(numbers[left] + numbers[right] > target){
                right--;
            }
            else{
                return {++left, ++right};                    
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