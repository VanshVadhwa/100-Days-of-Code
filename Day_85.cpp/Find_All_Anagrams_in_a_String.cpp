#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (s.empty() || p.empty() || s.length() < p.length())
            return result;

        unordered_map<char, int> charCount;
        for (char c : p)
            charCount[c]++;

        int left = 0, right = 0, count = p.length();

        while (right < s.length()) {
            if (charCount[s[right]] >= 1) {
                count--;
            }
            charCount[s[right]]--;
            right++;

            if (count == 0)
                result.push_back(left);

            if (right - left == p.length()) {
                if (charCount[s[left]] >= 0) {
                    count++;
                }
                charCount[s[left]]++;
                left++;
            }
        }
        return result;
    }
};