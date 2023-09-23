#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

void bubble_sort(int arr[], int n){
    for(int i=1;i<n;i++ ){
        for(int j=0;j<n-i;j++){
            //if(arr[j]>arr[j+1]){
                if(compare(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
            }

        }
    }
}
int main(){

    int arr[]={  -2,3,4,-12,6,1,3};
    int n;
    n=sizeof(arr)/sizeof(int);
    bubble_sort(arr, n);

    for(auto x : arr){
        cout<<x<<",";
    }
    return 0;
}