#include<iostream>
using namespace std;

int main(){
    //rectangle

    /*int rows,cols;
    cin>>rows>>cols;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;*/

    /*int rows,cols;
    cin>>rows>>cols;
    
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            if(i==1 || i==rows || j==1|| j==cols){
                cout<<"*";
            }
            else{ 
                cout<<" ";
            }
        }
        cout<<endl;
    }*/

    /*int n;
    cin>>n;
    int count=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
    }
    cout<<endl;
    }*/

    /*int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int space= 2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int space= 2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }*/

   /*int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
            
    }
    cout<<endl;
    }

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }*/

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        for(int j=2;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        for(int j=2;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}