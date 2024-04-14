#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size() - 1;

        for(int i=n;i>=0;i--) {
            if(s[i] != ' ') {
                count++;
            }
            if(s[i]==' ' && count > 0) {
                break;
            }
        }

        return count;
    }
};