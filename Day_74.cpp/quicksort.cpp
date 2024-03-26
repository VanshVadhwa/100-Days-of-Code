#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    //Now, we will count that how many elements are smaller than pivot and store the number of elements in count so that we can apply our formula(pivot=s+count)
    int count = 0;
    for(int i=s+1;i<=e;i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }
    // return count;

    //Now, we can find the right place of pivot after having the value of count and place it
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);

    //Now, it is at right place and we have to handle the case of left elements being smaller than it and right elemenets being larger than it
    int i=s, j=e;

    while(i<pivotIndex && j>pivotIndex) {
        while(arr[i]<pivot) {
            i++;
        }
        while(arr[j]>pivot) {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex) { //ye ni samajh aya
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    //base case
    if(s>=e) {
        return ;
    }
    //partition
    int p = partition(arr, s, e); //p=Index of first element to be placed in right position

    //leftpartsort
    quickSort(arr, s, p-1);

    //rightpartsort
    quickSort(arr, p+1, e); 

}

int main() {
    int arr[]={2,4,1,6,9,11,23,20,88,85};
    int n=10;
    
    quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}