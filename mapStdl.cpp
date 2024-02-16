#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string>  m;
    m[1]="chetan";
    m[12]="singh";
    m[3]="hi";

    m.insert({5,"Bheakh"});

    cout<<"before erase"<<endl;
    
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;  
    }

    cout<<"finding 12--> "<<m.count(12)<<endl;

    m.erase(5);
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;  
    }

    auto it = m.find(3);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}