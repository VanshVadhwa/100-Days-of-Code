#include<iostream>
using namespace std;

void updatereference(int &n) {
    cout << &n << endl;
    n++;
}

void update(int n) {
    n++;
}

int main()
{
    // int i=5;
    // //Create a reference variable (j is algo giving same output)
    // int &j = i;
    // cout << i << " " << j << endl; //Output: 5 5
    // i++;
    // j++;
    // cout << i << " " << j << endl; //Output: 7 7 

    int j=5;
    cout << &j << endl; //This is giving same memory address as in the updatereference function
    cout << "Before Update: " << j << endl;
    update(j);
    cout << "After Update: " << j << endl;
    updatereference(j);
    cout << "After Update Reference: " << j << endl;
}