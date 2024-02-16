#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        int count=1;
        while(j<=n){
            cout<<count;
            j=j+1;
            count=count+1;
        }
        int a=i-1;
        while(a){
            cout<<"*";
            a=a-1;
        }
        int b=i-1;
        while(b){
            cout<<"*";
            b=b-1;
        }
        int start=n;
        int c=n-i+1;
        while(start>=i){
            cout<<c;
            start=start-1;
            c=c-1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}