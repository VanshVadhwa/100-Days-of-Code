#include<iostream>
using namespace std;


//What is inline function? It can be formed if our code is only one line, only for some exceptional cases, it can get upto 2 or 3 lines and after 3 lines, it never works. It works just as Macros that it replaces its code in the main function. That means, it replaces the function call with its code and does not call the function.
inline int getMax(int a, int b) {
    return (a>b) ? a:b;    //tertiary operator
}

int main()
{
    int a=5, b=6;
    int ans=0;

    ans = getMax(a,b);
    cout << ans << endl;

    a=a+3;b=b+1;
    ans=getMax(a,b);
    cout << ans << endl;

    return 0;
}