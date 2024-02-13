#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        
        int n = s.length();
        vector<bool> dp(n + 1, false);
        dp[0] = true; 
        
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (dp[j]) {
                    string substring = s.substr(j, i - j); 
                    if (dict.find(substring) != dict.end()) {
                        dp[i] = true;
                        break;
                        }
                    }

            }
        }
        
        return dp[n];
    }
};