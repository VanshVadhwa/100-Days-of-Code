#include<iostream>
using namespace std;

void print(int* n) {
    cout << "Function is called from non-constant variable" << endl; 
}

// void print(const int *n) {
//     cout << "Function is called from constant variable" << endl;
// }

int main()
{
    // const int i=5;
    // print(&i);
    int j=6;
    print(&j);

}