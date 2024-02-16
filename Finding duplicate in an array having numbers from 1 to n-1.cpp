#include<iostream>
using namespace std;

int suma(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+i;
    }
    int arr[5]={4,3,2,3,1};
    int b=suma(arr,5);
    cout<<b-sum<<endl;
}