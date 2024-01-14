#include <bits/stdc++.h> 
using namespace std;
int linearSearch(vector<int> &a, int x) {
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}