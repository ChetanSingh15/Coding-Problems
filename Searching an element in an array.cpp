#include<iostream>
using namespace std;

int find(int arr[],int n,int a){
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[30];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a;
    cin>>a;
    int b=find(arr,n,a);
    if(b==1){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is absent"<<endl;
    }
}