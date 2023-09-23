#include<bits/stdc++.h>

using namespace std;
int main(){
    
char route[1000];
cin.getline(route,1000);
    int x=0;
    int y=0;

    for(int i=0;route[i]!='\0';i++){
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
        y--;
        break;
        case 'E':
        x++;
        case 'W':
        x--;
        break;
        }
    }
    cout<<" x and y are: "<<x<<","<<y<<".";

    if(x>=0 and y>=0){
        while(y--){
        cout<<"N"<<endl;
        }
        while(x--){
            cout<<"s"<<endl;
        }
    }
    
}