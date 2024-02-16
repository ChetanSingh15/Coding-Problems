#include<iostream>
using namespace std;

void sortArray(int *arr,int n){
    
    // base case ----> already sorted
    if(n==0||n==1){
        return ;
    }

    // 1 case solve kar liya - largest element ko end mei rakh dega
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    // Recurssive Call
    sortArray(arr,n-1);

}

int main(){
    int arr[14]={2,5,1,6,9,1,2,5,6,8,784,6,5,54};
    sortArray(arr,14);
    for(int i=0;i<14;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}