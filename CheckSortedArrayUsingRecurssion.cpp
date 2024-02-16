#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    // base case
    if(n==0||n==1){
        return true;
    }

    // Processing
    int i=0;
    if(arr[i]>arr[i+1]){
        return false;
    }
    else{//Recurssive call
        int ans=isSorted(arr+1,n-1);
        return ans;
    }
}

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int ans=isSorted(arr,5);
    if(ans){
    cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}