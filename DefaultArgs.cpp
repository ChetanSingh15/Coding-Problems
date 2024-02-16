#include<iostream>
using namespace std;

void print(int arr[],int n, int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={5,8,9,7,6};
    int size=5;
    print(arr,size);
    print(arr,size,2);
    return 0;
}