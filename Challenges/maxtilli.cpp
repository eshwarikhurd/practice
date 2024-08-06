#include<iostream>

using namespace std;

int main(){

    int n;
    int arr[n];

    cout<<"Size of Array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array:"<<endl;
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    int maxNo=0;

    for(int j=0; j<n;j++){
        maxNo= max(arr[j],maxNo);
    }
    cout<<"Max Number= "<<maxNo<<endl;
    return 0;
}