#include<iostream>

using namespace std;

int pas(int n){
    
    int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;
    }
    
 return f;
}
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int ans= pas(i)/(pas(j)*pas(i-j));
            cout<<ans<<" "; 
        }
        cout<<" "<<endl;
    }
    
    return 0;
}