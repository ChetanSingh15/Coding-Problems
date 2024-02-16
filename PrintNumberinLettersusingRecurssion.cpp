#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void saydigit(int n, string arr[]){
    
    // base case
    if(n==0){
        return ;
    }

    // Processing
    int digit=n%10;
    n=n/10;


    // Recurssive Call
    saydigit(n,arr);
    
    // Processing
    cout<<arr[digit]<<" ";
}

int main(){

    string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    saydigit(n,s);
    return 0;
}