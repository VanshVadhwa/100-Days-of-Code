#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++) {
        int firstIndex=i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[firstIndex]){
                firstIndex=j;
            }
        }
        swap(arr[firstIndex],arr[i]);
    }
}