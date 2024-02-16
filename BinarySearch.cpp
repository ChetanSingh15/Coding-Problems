#include<iostream>
using namespace std;

int find(int arr[], int n, int a){
    int start=0;
    int end=n-1;
    int mid=start+((end-start)/2);
    while(start<=end){
        if(arr[mid]==a){
            return mid;
        }
        if(arr[mid]<a){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return -1;
}
int main(){
    int odd[5]={1,2,3,4,8};
    int even[6]={2,3,5,8,9,11};
    cout<<"The element is present "<<find(odd,5,2)<<" at the index"<<endl;
    cout<<"The element is present "<<find(even,6,11)<<" at the index"<<endl;
}