#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>& arr, int n) {
    if(n==0 || n==1) {
        return ;
    }
    for(int i=0;i<n;i++) {
        if(arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr, n-1);
}

int main() {
    vector<int> arr={1,2,6,7,5};
    bubblesort(arr, arr.size());
    for(int num : arr) {
        cout << num << " ";
    }
    return 0;
}