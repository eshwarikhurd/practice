#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"Max= "<<a;
        }
        else cout<<"max= "<<c;
    }
    else {
        if(b>c){
            cout<<"max= "<<b;
        }
        else cout<<"max= "<<c;
    }
    return 0;
}