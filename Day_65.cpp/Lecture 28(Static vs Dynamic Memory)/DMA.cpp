//We are gonna use Heap memory here, and not stack memory which we were using till now

#include<iostream>
using namespace std;

int getSum(int *arr, int n) {
    int sum=0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // char ch='q';
    // cout << sizeof(ch) << endl;

    // char*c=&ch;
    // cout << sizeof(c) << endl;

    //Dynamic Memory Allocation
    // int *arr=new int[5];

    int n;
    cin >> n;

    //Variable size array
    int *arr = new int[n];
    //Suppose n = 50, so (new int[n]) is taking 200 bytes in heap memory and (int *arr) is taking 4 bytes 

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Answer is: " << ans << endl;

}