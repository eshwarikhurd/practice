#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    int arr[n];
    int maxNo = INT_MIN;
    int minNo= INT_MAX;

    cout<<"Size of Array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        maxNo= max(arr[i],maxNo);
        minNo = min(arr[i],minNo);
    }
    
    cout<<"Max: "<<maxNo<<endl;
    cout<<"Min: "<<minNo<<endl;

    return 0;

}