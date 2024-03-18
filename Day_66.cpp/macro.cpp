#include<iostream>
using namespace std;

#define PI 3.14
// We cannot update the value of it in main function
// It replaces PI with 3.14 in the main function meaning that it is 3.14 that is used in our code and not PI

int main()
{
    int r=5;
    // double PI = 3.14;
    double area = PI * r * r;
    cout << "Size of Macro PI: " << sizeof(PI) << endl;
    cout << "Area is: " << area << endl;
    return 0;
}