#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[9]={3,4,12,18,15,14,1,12};
    int hash[10]={0};
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<9;i++){
        hash[arr[i]]=hash[arr[i]]+1;
    }
    for(int i=0;i<10;i++){
        cout<<hash[i]<<" ";
    }
    return 0;
}