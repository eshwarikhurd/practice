#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    
    int div=2;
    while(div<num){
        if(num%div==0){
            cout<<"Not prime"<<endl;
            break;
        }
    else div=div+1;
    }
    if(div>=num){
        cout<<"Prime";
    }
}