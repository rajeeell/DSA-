//number spell

#include <bits/stdc++.h>
using namespace std;
 
string spell[]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printSpell(int n){
    if(n==0){
        return;
    }
    int lastDigit=n%10;
    printSpell(n/10);
    cout<<spell[lastDigit]<<" ";
}

int main(){

    int n;
    cin>>n;
    printSpell(n);

    return 0;
}