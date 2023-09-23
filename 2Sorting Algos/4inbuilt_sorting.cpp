#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a<   b;
}
int main(){
    int arr[]={ -2,3,4,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    sort(arr, arr+n, compare);

    for(auto x: arr){
        cout<<x<<",";
    }
}