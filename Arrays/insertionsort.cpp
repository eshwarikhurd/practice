#include<iostream>
using namespace std;

void in_sort(int n, int arr[]){
    
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
    in_sort(n, arr);
    return 0;  
}