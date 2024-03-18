//Area of Rectangle 
#include<iostream>
using namespace std;

#define AREA(l,b) (l*b)

int main()
{
    int a=2,b=4,area;
    area=AREA(a,b);
    cout << "Area of rectangle is: " << area << endl;
    return 0; 
}