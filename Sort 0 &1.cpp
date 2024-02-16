#include<iostream>
using namespace std;

void sort(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else{
            arr[i]=0;
            i++;
        }
        if(arr[j]==1){
            j--;
        }
        else{
            arr[j]=1;
            j--;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[23]={0,1,1,0,1,0,1,1,1,0,1,0,1,0,1};
    sort(arr,15);
    printArray(arr,15);
}