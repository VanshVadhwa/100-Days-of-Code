#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int lastOddIndex = -1;

        for (int i = 0; i < n; ++i) {
            if ((num[i] - '0') % 2 == 1) {
                lastOddIndex = i;
            }
        }

        if (lastOddIndex == -1) {
            return "";
        }

        return num.substr(0, lastOddIndex + 1);
    }
};