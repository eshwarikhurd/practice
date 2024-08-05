#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);

    

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it;
    }
    cout<<endl;
    for(auto element:v){
        cout<<element<<endl;
    }
    v.pop_back();
    cout<<endl;
    for(auto element:v){
        cout<<element<<endl;
    }

    
    return 0;

}