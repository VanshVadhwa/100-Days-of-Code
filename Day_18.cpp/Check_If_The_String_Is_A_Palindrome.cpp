#include<iostream>
#include<string> 
using namespace std;

bool checkPalindrome(string s)
{
    int n=s.size()-1;
    int i = 0, j = n;

    while (i <= j) {
        while (i <= j && !isalnum(s[i])) {
            i++;
        }
        while (i <= j && !isalnum(s[j])) {
            j--;
        }

        if (i <= j && toupper(s[i++]) != toupper(s[j--])) {
            return false;
        }
    }

    return true;
}