#include<iostream>
using namespace std;

int mountain(int arr[], int n){
    int start=0;
    int end=n-1;
    int mid=start+((end-start)/2);
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+((end-start)/2);
    }
    return start;
}

int main(){
    int arr[30]={1,2,3,4,5,6,7,81,54,8,7,5,2,1};
    cout<<"The largest value is at "<<mountain(arr,14)<<" index"<<endl;
}