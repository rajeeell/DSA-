//sorted array check

#include <bits/stdc++.h>
using namespace std;

int sortArr(int arr[], int n){
    if(n==1 || n==0){
        return true;
    }
    if(arr[0]<arr[1] && sortArr(arr+1, n-1)){
        return true;
    }
    return false;   
}

bool isSorted(int arr[], int i, int n){
    if(i=n-1){
        return true;
    }
    if(arr[i]<arr[i+1] && isSorted(arr, i+1, n)){
        return true;
    }
    return false;
}
int main(){

    int arr[]={1,2,3,4,6,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<isSorted(arr,0,n);

    return 0;
}