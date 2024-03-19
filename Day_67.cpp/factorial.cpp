#include<iostream>
using namespace std;

int fact(int n) {
    if(n==0) {
        return 1;
    }
    // int small = fact(n-1);
    // int big = n*small;
    return n*fact(n-1);;
}

int main() {
    int n;
    cin >> n;
    cout << fact(n) << endl;
}