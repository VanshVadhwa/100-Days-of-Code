#include<iostream>
using namespace std;

bool binarySearch(int arr[], int n, int key) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e) {
        if(arr[mid] == key) {
            return true;
        }
        
        else if(arr[mid] < key) {
            s = mid+1;
        }

        else if(arr[mid] > key) {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int key;
    cin >> key;
    bool found = binarySearch(arr, 5, key);
    if(found) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    return 0;
}