#include<iostream>
using namespace std;

void print(int arr[], int size) {
    cout << "Size of array is " << size  << endl;
    for(int i=0;i<size;i++) {
        cout << arr[i] << " "; 
    } cout << endl;
}

bool linearSearch(int arr[], int size, int key) {
    print(arr,size);
    //base case
    if(size == 0) {
        return 0;
    }

    //Processing
    if(arr[0]==key) {
        return true;
    }

    //R.C
    else {
        bool ispresent=linearSearch(arr + 1, size -1, key);
        return ispresent;
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key=3;

    bool ans = linearSearch(arr, size, key);

    if(ans) {
        cout << "Element is present" << endl;
    }
    else {
        cout << "Element is not present" << endl;
    }
}