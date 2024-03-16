#include<iostream>
using namespace std;

int main()
{
    //Important Concept
    int i=3;
    int *p = &i;
    *p=*p+1;
    cout << *p << endl;
    
    //Address Incrementation
    cout << "Before incrementing by 1: " << p << endl;
    p=p+1;
    cout << "After incrementing by 1: " << p << endl;

}