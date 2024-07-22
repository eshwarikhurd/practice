#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin>>num;

bool flag=0;
    for (int div=2;div<= sqrt(num);div++){
        if(num%div==0){
            cout<<"Not prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime";
    }
}