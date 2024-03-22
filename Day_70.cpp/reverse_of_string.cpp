#include<iostream>
using namespace std;

// void reverse(string &s) {
//     int start = 0;
//     int end= s.length() - 1;
//     while(start < end) {
//         // // Swap characters at start and end indices
//         // char temp = s[start];
//         // s[start] = s[end];
//         // s[end] = temp;
//         swap(s[start],s[end]);
//         start++;
//         end--;
//     }
//     cout << s << endl;
// }


//Only by i(Single Pointer Apprach)
// void reverse(string &s, int i) {
//     if (i >= s.length() / 2) {
//         return;
//     }

//     swap(s[i], s[s.length() - 1 - i]);
    
//     reverse(s, i + 1);
// }

//Double Pointer Apprach by reciursive method
void reverse(string &s, int start, int end) {
    cout << "call received for " << s << endl;
    //basecase
    if(start > end) {
        return ;
    }

    swap(s[start],s[end]);
    start++;
    end--;
    
    //Recursive Call
    reverse(s, start, end);
}

int main() {
    string s="abcde";
    int n = s.length();
    reverse(s,0,n-1);
    cout << s << endl;
}