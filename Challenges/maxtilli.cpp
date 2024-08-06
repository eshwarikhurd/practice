#include<iostream>

using namespace std;

int main(){

    int arr[]={0, -9, 1, 3, -4, 5};

    cout<<"Array:"<<endl;
    for(int l=0;l<6;l++){
        cout<<arr[l]<<" ";
    }
    cout<<endl;
    int maxNo=arr[0];

    for(int j=0;j<6;j++){
        maxNo=max(maxNo,arr[j]);
        cout<<"Max Number= "<<maxNo<<endl;
    }
    
    return 0;
}