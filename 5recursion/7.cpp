#include <bits/stdc++.h>
using namespace std;

int tillingProblem(int n, int m){
    if(n<m){
        return 1;
    }
    int op1=tillingProblem(n-1,m);
    int op2=tillingProblem(n-m,m);
    return (op1+op2);
}

int main(){

    int n,m;
    cin>>n>>m;
    cout<<tillingProblem(n,m)<<endl;
    return 0;
}