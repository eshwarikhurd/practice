#include<iostream>
#include<math.h>
using namespace std;

void fib(int n){
    
    int t1=0;
    int t2=1;
    int nextt;

    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextt=t1+t2;
        t1=t2;
        t2=nextt;
    }
 return;
}
int main(){
    int n;
    cin>>n;
    
    cout<<"\nFibonacci Series:"<<endl;
    fib(n);

    return 0;
}