#include<iostream>

using namespace std;

int ncr(int n){
    
    int f=1,f1=1,f2=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    
 return f;
}
int main(){
    int n,r;
    cin>>n;
    cin>>r;
    int ans= ncr(n)/(ncr(r)*ncr(n-r));
    cout<<ans<<endl;
    return 0;
}