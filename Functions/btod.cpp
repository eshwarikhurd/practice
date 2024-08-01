//Binary to decimal conversion

#include<iostream>
#include<math.h>
using namespace std;

int binarytodec(int n){

    int temp=1;
    int dec=0;
    while(n>0){
        int x=n%10;
        dec+= temp*x;
        temp *=2;
        n/=10;
    }

return dec;
}
int main(){
    int num;
    cin>>num;

    cout<< binarytodec(num)<<endl;
}