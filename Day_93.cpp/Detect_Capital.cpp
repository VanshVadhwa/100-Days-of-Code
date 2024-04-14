#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        int countCapital = 0;
        for(char c : word) {
            if(isupper(c) ) {
                countCapital++;
            }
        }

        if(countCapital == n || countCapital == 0) {
            return true;
        }

        if(isupper(word[0]) && countCapital == 1) {
            return true;
        }
        return false;

    }
};