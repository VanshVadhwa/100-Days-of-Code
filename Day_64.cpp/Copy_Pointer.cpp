#include<iostream>
using namespace std;

int main()
{
    int num = 5;

    int *p = &num;
    cout << "Before Pointer: " << num << endl;
    (*p)++;
    cout << "After Pointer: " << num << endl;
    
    cout << "Address of Pointer: " << p << endl;

    //Copying a Pointer
    int *q=p;
    cout << "Value of q(copy of p): " << q << endl;
    cout << "Value of q(copy of p): " << *q << endl;



}