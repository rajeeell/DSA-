#include <bits/stdc++.h>
using namespace std;

int power(int a, int n){
    if(n==0){
        return 1;
    }
    return a*power(a, n-1);
}

int fastPower(int a, int n){
    if(n==0){
        return 1;
    }
    int subProb=fastPower(a,n/2);
    int subProbSq=subProb*subProb;

    if(n&1){  //checking is its odd
        return a*subProbSq;
    }
    return subProbSq;
}

int main(){

    //cout<<power(3,5)<<endl;
    cout<<fastPower(3,5)<<endl;
    return 0;
}