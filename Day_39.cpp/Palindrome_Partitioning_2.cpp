#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
int minCut(string s) {
        int n = s.size();
        vector<int> cuts(n, 0);
        for (int i = 0; i < n; ++i)
            cuts[i] = i;

        for (int i = 0; i < n; ++i) {
            expAroundCenter(s, i, i, cuts);
            expAroundCenter(s, i, i + 1, cuts);
        }

        return cuts[n - 1];
    }

private:
    void expAroundCenter(const string& s, int left, int right, vector<int>& cuts) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            if (left == 0)
                cuts[right] = 0; 
            else
                cuts[right] = min(cuts[right], cuts[left - 1] + 1); 
            --left;
            ++right;
        }
    }
};