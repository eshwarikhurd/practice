#include<iostream>

using namespace std;

int fact(int n){
    
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
 return f;
}
int main(){
    int num;
    cin>>num;
    int ans= fact(num);
    cout<<ans<<endl;
    return 0;
}