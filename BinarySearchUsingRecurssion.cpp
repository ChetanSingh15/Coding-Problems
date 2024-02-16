#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarySearch(int arr[],int s,int e,int k){
    print(arr,s,e);
    // base case
    if(s>e){//element not found
        return false;
    }

    int mid=s+(e-s)/2;
    cout<<"Value of arr mid is "<<arr[mid]<<endl;
    if(arr[mid]==k){//element found
        return true;
    }
    if(arr[mid]>k){
        return binarySearch(arr,s,mid-1,k);
    }
    else{
        return binarySearch(arr,mid+1,e,k);
    }
}

int main(){

    int arr[7]={1, 2, 3, 4 ,5, 6, 7};

    int size=7;
    int start=0;
    int key=6;

    bool ans=binarySearch(arr,start,size-1,key);

    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}