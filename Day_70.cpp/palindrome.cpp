#include<iostream>
using namespace std;

bool checkPalindrome(string &s, int i, int j) {
    //base case
    if(i>j) {
        return true;
    }

    if(s[i]!=s[j]) {
        return false;
    }

    checkPalindrome(s, i +1, j-1);
}

int main()
{
    string s="abcba";
    int n = s.length();
    int ans = checkPalindrome(s,0,n-1);
    cout << "Palindrome or not: " << ans << endl;
}