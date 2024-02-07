#include<bits/stdc++.h>
usig namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        
        int maxFreq = 0;
        for (auto& entry : freq) {
            maxFreq = max(maxFreq, entry.second);
        }
    
        vector<string> bucket(maxFreq + 1);
        for (auto& entry : freq) {
            bucket[entry.second].append(entry.second, entry.first);
        }
        
        string sortedString;
        for (int i = maxFreq; i > 0; --i) {
            sortedString += bucket[i];
        }
        
        return sortedString;
    }
};