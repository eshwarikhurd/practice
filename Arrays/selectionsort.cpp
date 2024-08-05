#include<iostream>
using namespace std;

void sel_sort(int n, int arr[]){
    int temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
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
    sel_sort(n, arr);
    return 0;  
}