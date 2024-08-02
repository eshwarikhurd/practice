#include<iostream>

using namespace std;
bool flag=false;
bool linearSearch(int arr[], int n, int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=true;
            cout<<"Found at "<<i<<"th address"<<endl;
            break;
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

    linearSearch(arr, n, num);
    if (flag==false){
        cout<<"Number not found!"<<endl;
    }

    return 0;
}