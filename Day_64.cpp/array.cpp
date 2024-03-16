#include<iostream>
using namespace std;

int main() 
{
    int arr[10]={1,3,2,4,5,6,7,8,9,10};
    
    cout << "Address of first memory block is: " << arr << endl;
    cout << "Address of first memory block is: " << &arr[0] << endl;

    //Only giving first element
    // cout << *arr << endl;

    //It is only adding the value not the index
    // cout << *arr + 1 << endl;

    //This is adding the index number
    cout << "After adding pointer to the whole bracket: " << *(arr+1) << endl;

    //They both are giving same outputs
    cout << arr[5] << endl;
    cout << *(arr+5) << endl;

    //arr[i] = *(arr+i)

    //Interesting
    cout << 5[arr] << endl;
    cout << *(5+arr) << endl;


}