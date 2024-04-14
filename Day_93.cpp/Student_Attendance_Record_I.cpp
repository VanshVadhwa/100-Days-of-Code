#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int A=0,L=0;
        for(char c : s) {
            if(c == 'A') {
                A++;
                if(A>1) return false;
            }
            if(c == 'L') {
                L++;
                if(L>2) return false;
            }
            else L = 0;
        }
        return true;
    }
};