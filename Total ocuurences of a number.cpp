#include<iostream>
using namespace std;

int firstoccurrence(int arr[], int n, int a){
    int start=0;
    int end=n-1;
    int mid=start+((end-start)/2);
    int ans=-1;
    while(start<=end){
        if(arr[mid]==a){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<a){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return ans;
}

int lastoccurrence(int arr[], int n, int a){
    int start=0;
    int end=n-1;
    int mid=start+((end-start)/2);
    int ans=-1;
    while(start<=end){
        if(arr[mid]==a){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<a){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return ans;
}

int main(){
    int arr[30]={1,1,2,2,2,2,2,2,2,2,2,2,2,4,5,6,8};
    cout<<"The totaloccurrences of 1 are "<<lastoccurrence(arr,17,1)-firstoccurrence(arr,17,1)+1<<endl;
}