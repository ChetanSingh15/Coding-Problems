#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        int digit=n%2;
        if(digit==1){
            count++;
        }
        n=n/2;
    }
    cout<<count<<endl;
}