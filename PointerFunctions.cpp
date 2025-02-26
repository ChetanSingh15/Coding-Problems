#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    // p=p+1;
    // cout<<"inside "<<p<<endl;
    *p=*p+1;
}

int getSum(int *arr,int n){ //int arr[] is same as int *arr

    cout<<"Size : "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+i[arr]; // since arr[i] is same as i[arr]
    }
    return sum;
}

int main(){

    int value=5;
    int *p=&value;

    // print(p);

    cout<<"before "<<*p<<endl;
    update(p);
    cout<<"after "<<*p<<endl;
    cout<<"Value "<<value<<endl;

    int arr[6]={1,2,3,4,5,9};
    cout<<"Sum is "<<getSum(arr,6)<<endl;
    cout<<"Sum is "<<getSum(arr+3,3)<<endl;

    return 0;
}