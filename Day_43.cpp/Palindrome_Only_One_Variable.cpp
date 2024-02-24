#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char toLowerCase(char ch) {
    if(ch>='a' && ch<='z') {
        return ch;
    }
    else {
        char temp=ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n) {
    int s=0;
    int e=n-1;
    while(s<=e) {
        if(toLowerCase (a[s]) != toLowerCase(a[e])) {
            // break;
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

// void Palindrome(char name[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     bool isPalindrome = true;
//     while (s <= e)
//     {
//         if (name[s] != name[e])
//         {
//             isPalindrome = false;
//             break;
//         }
//         s++;
//         e--;
//     }
//     if (isPalindrome)
//     {
//         cout << "Palindrome";
//     }
//     else
//     {
//         cout << "Not Palindrome";
//     }
// }

int main()
{
    char name[20];
    cout << "Enter you name: ";
    cin >> name;
    int len = strlen(name);
    cout << checkPalindrome(name, len) << endl;
    cout << "Character is: " << toLowerCase('b') << endl;
    cout << "Character is: " << toLowerCase('B') << endl;
    return 0;
}