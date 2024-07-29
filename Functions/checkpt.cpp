#include<iostream>
#include<math.h>
using namespace std;
bool flag=false;
void pt(int n1,int n2,int n3){

    if(pow(n1,2)==(pow(n2,2) + pow(n3,2))){
        flag=true;
    }
    else if(pow(n2,2)==(pow(n1,2) + pow(n3,2))){
        flag=true;
    }
    else if(pow(n3,2)==(pow(n2,2) + pow(n1,2))){
        flag=true;
    }
    else{
        flag=false;
    }
 return;
}
int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;

    pt(num1,num2,num3);
    if(flag==true){
        cout<<"Pythagorean Triplet!"<<endl;
    }
    else{
        cout<<"Not a Pythagorean Triplet"<<endl;
    }
}