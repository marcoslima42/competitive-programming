//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int size = s.length();
        int left = 0; int maxLength = 0;
        unordered_set<char> window;

        if(size == 0)    return 0;
        else{

            for(int right = 0; right < size; right++){

                //diminuir a janela
                while(window.find( s[right] ) != window.end()){
                    window.erase(s[left]);
                    left++;
                }

                //expandindo window
                window.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
            }

        }

        return maxLength;
    }
};

int main(){

    string s = "abcabcbb";

    Solution obj;

    cout << obj.lengthOfLongestSubstring(s) << endl;


    return 0;
}