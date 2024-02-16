#include<iostream>
using namespace std;

int main(){
    int n=10;
    int arr[10]={45,25,3,5,46,1,9,2,8,16};
    for (int i=1;i<n ;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if (arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{//ruk jao
                break;
            }
        }
        arr[j+1] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}