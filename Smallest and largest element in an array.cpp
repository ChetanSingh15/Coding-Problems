#include<iostream>
using namespace std;

int getmax(int arr[],int n){
    int max=-1000;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int getmin(int arr[],int n){
    int min=10000;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    int arr[30];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Largest element in array is "<<getmax(arr,n)<<endl;
    cout<<"Smallest element in array is "<<getmin(arr,n)<<endl;
}