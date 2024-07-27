#include<iostream>

using namespace std;

int fact(int n){
    
    for(int i=1;i<=(n-1);i++){
        n=n*i;
    }
 return n;
}
int main(){
    int num;
    cin>>num;
    cout<<fact(num)<<endl;
    return 0;
}