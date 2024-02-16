#include<iostream>
using namespace std;


void print(int arr[],int n){
    cout<<"Size of array is "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int getSum(int arr[], int n){
    print(arr,n);
    // base case
    if(n==0){
        return 0;
    } 
    if(n==1){
        return arr[0];
    }

    int ans=getSum(arr+1,n-1);
    int sum= arr[0] + ans;
    cout<<"Sum is"<<sum<<endl;
    return sum;
}

int main(){
    int arr[5]={1,2,5,4,8};
    int size=5;
    int sum=getSum(arr,5);
    cout<<"Sum of the elements of array is: "<<sum<<endl;
    return 0;
}