#include<iostream>
#include<vector> 
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<n;i++) {
        bool swapped = false;
        //For round 1 to n-1
        for(int j=0;j<n-i;j++) {
            //Process element till (n-i) ide
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            //Already Sorted
            break;
        }
    }
}
