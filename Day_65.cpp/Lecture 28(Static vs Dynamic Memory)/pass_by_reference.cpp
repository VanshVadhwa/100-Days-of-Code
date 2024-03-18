#include<iostream>
using namespace std;

void update(int &n) {
    n++;
}

int &updateref(int a) {
    int num=a;
    int &ans=num;
    return ans;
}

int main() {
    int i=5;
    cout << "Before reference function call: " << i << endl;
    update(i);
    cout << "After reference function call: " << i << endl;
    updateref(i);
}