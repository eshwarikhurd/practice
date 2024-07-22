#include<iostream>
using namespace std;

int main(){
    int n;
    for(n=1;n<=16;n++){

        if (n%3==0){
            continue;
        }
        cout<<n<<endl;
        
    }
    return 0;
}