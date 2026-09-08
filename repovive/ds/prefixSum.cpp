#include <bits/stdc++.h>

using namespace std;

class NumArray {
public: 
    vector<int> prefix;

    NumArray(vector<int>& nums) {
        prefix.resize(nums.size() + 1, 0);

        for(int i = 0; i < nums.size(); i++){
            prefix[i + 1] = nums[i] + prefix[i];
        }
    }   

    int sumRange(int left, int right) {
        return prefix[right + 1] - prefix[left];
    }
};

int main(){
    //[-2, 0, 3, -5, 2, -1]
    //int arr[] = {-2, 0, 3, -5, 2, -1};
    vector<int> arr = {-2, 0, 3, -5, 2, -1};
    NumArray obj(arr);
    

    for(auto x : obj.prefix){a
        cout << x << " ";
    }

    cout << "\n";
    //[0, 2], [2, 5], [0, 5]
    cout << obj.sumRange(0, 2) << endl; //1 
    cout << obj.sumRange(2, 5) << endl; //-1
    cout << obj.sumRange(0, 5) << endl; //-3

    return 0;
}