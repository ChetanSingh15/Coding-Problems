#include<iostream>
#include<algorithm>
#include<vector>
// #include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(11);
    cout<<"Finding 6 --> "<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower bound --> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper bound --> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;    

    int a=5;
    int b=3;

    cout<<"max --> "<<max(a,b)<<endl;
    cout<<"min --> "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a -> "<<a<<endl;

    string s="aabds";
    reverse(s.begin(),s.end());
    cout<<"Sring --> " <<s<<endl; 

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    sort(v.begin(),v.end());
    cout<<"after sorting"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}