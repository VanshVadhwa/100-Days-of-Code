#include<iostream>
using namespace std;

int main()
{
    int *p = new int;
    int *ptr = p;

    // Assigning the value 5 to the memory location pointed to by p
    *p = 5; //This is allocated in heap memory

    cout << "Value at ptr: " << *ptr << endl;
    cout << "Value at p: " << *p << endl;
    cout << "Address at ptr: " << ptr << endl;
    cout << "Address at p: " << p << endl;

    // Deallocate dynamically allocated memory
    delete p;

    cout << p << endl; //It is giving same address
    cout << *p << endl; //It is giving garbage value as p is deleted now


    int *a=new int[5];
    int *ptra = a;

    // Assigning the value 2 to the first element of the dynamically allocated array
    *(ptra + 0) = 2; // or ptra[0] = 2;

    // for (int i = 0; i < 5; ++i) {
    //     ptra[i] = i + 1; // Assigning values 1, 2, 3, 4, 5 to the array
    // }

    // // Output the values of the array
    // cout << "Values of the array: " << endl;
    // for (int i = 0; i < 5; ++i) {
    //     cout << "Element " << i << ": " << ptra[i] << endl;
    // }

    cout << "Value at index 0: " << *ptra << endl;

    cout << "Value at ptra: " << *ptra << endl; //Givng same garbage value
    cout << "Value at a: " << *a << endl;  //Giving same garbage value
    cout << "Address at ptra: " << ptra << endl; //Giving same address
    cout << "Address at a: " << a << endl; //Giving same address

    delete []ptra;

    cout << ptra << endl;
    cout << *ptra << endl; //Giving Grabage value

    return 0;

}