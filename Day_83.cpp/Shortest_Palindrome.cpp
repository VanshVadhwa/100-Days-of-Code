#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string shortestPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        string concat = s + "#" + rev;
        
        vector<int> kmp(concat.size(), 0);
        for (int i = 1, j = 0; i < concat.size(); ) {
            if (concat[i] == concat[j]) {
                kmp[i] = j + 1;
                ++i;
                ++j;
            } 
            else {
                if (j != 0) {
                    j = kmp[j - 1];
                } else {
                    kmp[i] = 0;
                    ++i;
                }
            }
        }
        
        int len = kmp.back();
        
        string prefix = s.substr(len);
        reverse(prefix.begin(), prefix.end());
        return prefix + s;
    }
};