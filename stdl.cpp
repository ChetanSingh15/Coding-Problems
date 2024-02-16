#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.at(2)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> last(a);
    for(int i:last){
        cout<<i<<" ";
    }
}