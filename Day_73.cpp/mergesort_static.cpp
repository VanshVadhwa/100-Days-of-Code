#include <iostream>
#include<vector>
using namespace std;

void merge(int arr[], int s, int mid, int e) {
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // int first[len1], second[len2];
    vector<int> first(len1), second(len2);

    for (int i = 0; i < len1; i++)
        first[i] = arr[s + i];

    for (int i = 0; i < len2; i++)
        second[i] = arr[mid + 1 + i];

    int index1 = 0, index2 = 0, k = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2])
            arr[k++] = first[index1++];
        else
            arr[k++] = second[index2++];
    }

    while (index1 < len1)
        arr[k++] = first[index1++];

    while (index2 < len2)
        arr[k++] = second[index2++];
}

void mergeSort(int arr[], int s, int e) {
    if (s < e) {
        int mid = s + (e - s) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
}

int main() {
    int arr[] = {1, 2, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    mergeSort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}