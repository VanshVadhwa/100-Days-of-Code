#include<iostream>
using namespace std;

void print(int arr[], int n, int start=0) { //Here, int start =0 is a defauly argument i.e., if we don't pass the third value in the main function((print(arr,5,2))). Even if we don't put 2 here, it is not going to give error as we already passed it and if we give the value, it's gonna change according to that.
    for(int i=start;i<n;i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size=5;

    print(arr, 5);
}