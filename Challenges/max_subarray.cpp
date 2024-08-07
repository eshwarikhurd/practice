#include<iostream>

using namespace std;
int create_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main(){
    int n;
    int arr[n];

    create_arr(n,arr);

    int ans=2;
    int pd=arr[1]-arr[0];
    int j=2;

    while(j>=2){
        int curr= arr[j]-arr[j-1];
        if(pd!=curr){
            pd=curr;
        }
        else ans++;
        j++;
    }
    cout<<ans<<endl;
    return 0;
}