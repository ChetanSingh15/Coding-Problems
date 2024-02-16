#include<iostream>
using namespace std;

int getSum(int *arr, int n){

    int sum=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }

    return sum;
}

int main(){

    int n;
    cin>>n;

    // Variable size array
    int *arr=new int[n];

    // Taking input in array
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    // Printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Sum is "<<getSum(arr , n);
    
    // delete i; --> For deleting single element 
    delete []arr; // For deleting array
    return 0;
}