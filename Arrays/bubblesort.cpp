#include<iostream>
using namespace std;

void bub_sort(int n, int arr[]){
    int temp=0,counter=1;
    while(counter<n-1){
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        else continue;
    }
    counter++;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return;
}
int main(){
    int n;
    int arr[n];

    cout<<"Size of Array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Sorted Array:"<<endl;
    bub_sort(n, arr);
    return 0;  
}