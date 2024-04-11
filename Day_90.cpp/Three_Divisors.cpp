#include<iostream>
using namespace std;

class Solution {
public:
    bool isThree(int n) {
        int i=1;
        int count = 0;
        while(i<=n) {
            if(n%i==0) {
                count++;
            }
            i++;
        }
        if(count==3) {
            return true;
        }
        return false;
    }
};