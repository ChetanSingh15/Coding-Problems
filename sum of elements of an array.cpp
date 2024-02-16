#include<iostream>
using namespace std;

int sum(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
} 
int main(){
    int n;
    cin>>n;
    int arr[10];
    int a=sum(arr,n);
    cout<<a<<endl;
}