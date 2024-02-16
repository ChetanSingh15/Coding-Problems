#include<iostream>
using namespace std;

int main(){
    int n=10;
    int arr[10]={45,25,3,5,46,1,9,2,8,16};
    for (int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
    swap(arr[minIndex],arr[i]);
    }
    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}