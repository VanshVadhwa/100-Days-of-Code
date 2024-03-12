#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) return result;
        
        unordered_map<char, string> phoneMap{
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        
        result.push_back("");
        for (char digit : digits) {
            const string& letters = phoneMap[digit];
            vector<string> temp;
            for (char letter : letters) {
                for (const string& s : result) {
                    temp.push_back(s + letter);
                }
            }
            result.swap(temp);
        }
        
        return result;
    }
};