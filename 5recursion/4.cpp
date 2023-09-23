//checking the first occurence of element in an array

#include <bits/stdc++.h>
using namespace std;

int firstOccur(int arr[], int n, int key){
    if(n==0){
        return -1;
    }
    if(arr[0]==key){
        return 0;
    }
    int subArray=firstOccur(arr+1, n-1, key);
    if(subArray!=-1){
        return subArray+1;
    }
    return -1;
}

int lastOccur(int arr[], int n, int key){
    if(n==0){
        return -1;
    }
    int subindex=lastOccur(arr+1, n-1, key);
    if(subindex==-1){
        if(arr[0]==key){
            return 0;
        }
        else{
            return -1;
        }
        
    }
    else{
            return subindex+1;
        }
}

int main(){

    int arr[]={1,2,7,3,4,7,5};
    int n=sizeof(arr)/sizeof(int);
    int key=7;
    cout<<lastOccur(arr,n,key)<<endl;
    return 0;
}