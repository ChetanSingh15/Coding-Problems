#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[30];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=unique(arr,n);
    cout<<ans<<endl;
}