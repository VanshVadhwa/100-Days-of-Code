#include<iostream>
using namespace std;

void count(int n) {
    if(n==0) {
        return ;
    }

    // cout << n << " "; //It prints 5 4 3 2 1

    //Recursive Relation
    count(n-1);
    
    cout <<  n << " "; //It prints 1 2 3 4 5 
}

int main()
{
    int n;
    cin >> n;
    
    count(n);

    return 0;
}