#include <bits/stdc++.h>
using namespace std;

int getbit(int n, int pos){
    return (n&(1<<pos));
}

int setbit(int n, int pos){
    return (n|(1<<pos));
}

int clearbit(int n, int pos){
    int mask=~(1<<pos);
    return (n&mask);
}

int updatebit(int n, int pos, int val){
    int mask=~(1<<pos);
    return(n&mask);
}

void clearLastBits(int &n, int i){
    int mask=(-1<<i);
    n=n&mask;
}
int main(){
    int n=5;
    int i=3;
    clearLastBits(n,i);
    cout<< n<<endl;
    // cout<<    getbit(5,1)<<endl;
    // cout<<setbit(5,1)<<endl;
    return 0;
}