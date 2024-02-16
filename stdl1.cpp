#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> m;
    m[1]="love";
    m[13]="baba";
    m[2]="hii";
    m.insert({5,"hello"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<m.count(13)<<endl;
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}