#include<iostream>
using namespace std;

void funcref(int &a, int &b) {
    a++;
    b++;
    // cout << a << " " << b << endl;
}

void funcval(int a, int b) {
    a++;
    b++;
    // cout << a << " " << b << endl;
}

int main()
{
    int a=3, b=4, c=5, d=6;

    funcref(a,b);
    cout << a << " " << b << endl;

    funcval(c,d);
    cout << c << " " << d << endl;
}