#include<iostream>
using namespace std;

int main(){
    int num=1;

    int p=num++ + ++num;
    cout<<num<<endl;

    int q=++num + num++;
    cout<<num<<endl;
    
    cout<<p<<endl;
    cout<<q<<endl;

    return 0;
}