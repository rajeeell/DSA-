#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){

    for(int pos=0;pos<n-1;pos++){

        int current = arr[pos];
        int min_position=pos;

        for(int j=0;j<n;j++){
            
            if(arr[j]<arr[min_position]){
                min_position=j;
            }
        }
        swap(arr[min_position], arr[pos] );
    }
}


int main(){

    int arr[]={  -2,3,4,-12,6,1,3};
    int n;
    n=sizeof(arr)/sizeof(int);
    selection_sort(arr, n);

    for(auto x : arr){
        cout<<x<<",";
    }
    return 0;
}