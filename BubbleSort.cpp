#include<iostream>
using namespace std;

int main(){
    int n=10;
    int arr[10]={45,25,3,5,46,1,9,2,8,16};
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " "; 
    }
}