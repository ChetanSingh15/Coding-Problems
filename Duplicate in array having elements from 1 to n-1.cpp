#include<iostream>
using namespace std;

int duplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arr[5]={4,2,1,2,3};
    int a=duplicate(arr,5);
    cout<<a<<endl;
}