#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false; 
        }
        vector<int> count(26, 0); 
        
        for (char ch : s) {
            count[ch - 'a']++;
        }
        
        for (char ch : t) {
            count[ch - 'a']--;
        }
        
        for (int freq : count) {
            if (freq != 0) {
                return false; 
            }
        }
        return true; 
    }
};

int main() {
    Solution ans;
    string s, t;
    cin >> s >> t;
    cout << ans.isAnagram(s, t);
}