#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size()-1;
        int i = 0, j = n;
        
        while (i <= j) {
            while (i <= j && !isalnum(s[i])) {
                i++;
        }
        while (i <= j && !isalnum(s[j])) {
            j--;
        }

        if (i <= j && tolower(s[i++]) != tolower(s[j--])) {
            return false;
        }
    }

    return true;
    }
    
};
