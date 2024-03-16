#include<iostream>
using namespace std;

int main() 
{
    int num = 5;
    cout << "Value of num is: " << num << endl;

    //Address of Operator - &
    cout << "Address of num is: " << &num << endl;

    //Pointer(*) - Stores Address
    int *ptr= &num;
    cout << "Address of num through pointer: " << ptr << endl;
    cout << "Value of num through pointer: " << *ptr << endl;

    //(*) = Dereference Operator

    char ch='a';
    char *p = &ch;
    // double d = 4.2;
    // double *ptr = &d;

    cout << "Size of Integer Value: " << sizeof(num) << endl;
    cout << "Size of Pointer value: " << sizeof(*ptr) << endl;
    cout << "Size of Address Pointer: " << sizeof(ptr) << endl;
    cout << "Size of Address Pointer: " << sizeof(p) << endl;

}