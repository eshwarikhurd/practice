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

    cout<<"Size of Array:";
    cin>>n;

    create_arr(n,arr);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<"Sum="<<sum<<endl;
        }
        
    }
}