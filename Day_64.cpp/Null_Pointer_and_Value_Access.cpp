#include<iostream>
using namespace std;

int main()
{
    // int i=5;
    // int *p = 0;
    // p = &i;

    // cout << "Value of Pointer: " << *p << endl;
    // cout << "Address of Pointer: " << p << endl;

    int num = 5;
    int a = num;
    cout << "Before integer: " << num << endl;
    a++;
    cout << "After integer: " << num << endl;


    int *p = &num;
    cout << "Before Pointer: " << num << endl;
    (*p)++;
    cout << "After Pointer: " << num << endl;

    return 0;
}