#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        int a=n&1;
        if(a==1){
            count++;
        }
        n=n>>1;
    }
    cout<<count<<endl;
}