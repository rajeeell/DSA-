//count ttotal number of bits
#include <bits/stdc++.h>
using namespace std;

int count_bits(int n ){
    int cnt=0;
    while(n>0){
        int lastBit=(n&1);
        cnt=cnt+lastBit;
        n=n>>1;
    }
    return cnt;
}

int count_bits_hack(int n){
    int ans=0;
    while(n>0){
        n=n&(n-1);
        ans++;
         
    }
    return ans;
}
int main(){

    cout<<count_bits_hack(5)<<endl;;
    

    return 0;
}