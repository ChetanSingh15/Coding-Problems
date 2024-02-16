#include<iostream>
using namespace std;

void sum(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[10];
    sum(arr,n);
}