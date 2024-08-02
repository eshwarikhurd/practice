#include<iostream>

using namespace std;
bool flag=false;
bool binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;

    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            flag=true;
            cout<<"Found at index "<<mid<<endl;
            break;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return false;  
}
int main(){
    int n;
    int arr[n];
    int num;

    cout<<"Size of Array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"To Search: ";
    cin>>num;

    binarySearch(arr, n, num);
    if (flag==false){
        cout<<"Number not found!"<<endl;
    }

    return 0;
}