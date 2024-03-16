#include<iostream>
using namespace std;

int main()
{
    //Segmentation Fault: -
    // int *p=0;
    // cout << *p << endl;

    int i = 5;
    int *q = &i;
    cout << "Value of Pointer: " << *q << endl;
    cout << "Address of Pointer: " << q << endl;

    // int *p = &i;
    int *p = 0;
    p = &i;

    cout << "Value of Pointer: " << *p << endl;
    cout << "Address of Pointer: " << p << endl;
    return 0;
}