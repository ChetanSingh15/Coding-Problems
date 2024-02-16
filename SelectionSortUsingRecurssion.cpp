#include<iostream>
using namespace std;

void sortArray(int *arr,int k,int n){

    // base case
    if(k==n){
        return ;
    }

    int minIndex=k;
    for(int i=k;i<n;i++){
        if(arr[minIndex]>arr[i]){
            minIndex=i;
        }
    }
    swap(arr[minIndex],arr[k]);

    // Recurssive Call
    sortArray(arr,k+1,n);
}

int main(){
    int arr[14]={2,5,1,6,9,1,2,56,5,458,5,55,6,43};
    sortArray(arr,0,14);
    for(int i=0;i<14;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}