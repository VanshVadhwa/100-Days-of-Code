#include<iostream>
using namespace std;

void print(int arr[], int start, int end) {
    cout << "Start and End of array is " << start << " " << end << endl;
    for(int i=start;i<=end;i++) {
        cout << arr[i] << " "; 
    } cout << endl;
}

bool binarySearch(int arr[], int start, int end, int key) {
    print(arr, start, end);
    //base case = Elemet not found
    if(start > end) {
        return false;
    }

    int mid = start+(end-start)/2;
    cout << "Value of arr mid is " << arr[mid] << endl;
    
    //base case = Element present in mid only
    if(arr[mid]==key) {
        return true;
    }

    if(arr[mid] < key) {
        return binarySearch(arr, mid+1,end,key);
    }
    if(arr[mid] > key) {
        return binarySearch(arr, start, mid-1, key);
    }
    // if(arr[mid]==key) {
    //     return true;
    // }
}

int main() {
    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    // int start = 0;
    // int end = size - 1;
    int key = 14;

    // bool ans = binarySearch(arr, start, end, key);

    // if(ans) {
    //     cout << "Element is present" << endl;
    // }
    // else {
    //     cout << "Element is not present" << endl;
    // }

    cout << endl;
    cout << "Present or not: " << binarySearch(arr, 0, 5, key) << endl;

    
}