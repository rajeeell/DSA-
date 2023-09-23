#include <bits/stdc++.h>
using namespace std;

int main(){

    char ch;
    ch=cin.get();

    int alpha=0;
    int dig=0;
    int space=0;

    while(ch!='\n'){
        if(ch>='0' and ch<='9'){
            dig++;
        }
        else if((ch>='a' and ch<='z')or(ch>='A' and ch<='Z')){
            alpha++;
        }
        else if ((ch==' ' or ch=='\t')){
            space++;
        }
        ch=cin.get();
    }
    cout<<alpha<<endl;
    cout<<dig<<endl;
    cout<<space<<endl;
    return 0;
}