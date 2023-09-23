#include <bits/stdc++.h>
using namespace std;

int convertToBinary(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int lastbit=(n&1);
        ans=ans+lastbit*pow ;
        pow=pow*10;
        n=n>>1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<convertToBinary(n)<<endl;
    return 0;
}