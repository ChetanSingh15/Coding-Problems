#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4],int target, int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

// To print rowwise sum
void printSum(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

// To print column wise sum
void printColSum(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int largestRowSum(int arr[][4],int row, int col){
    int maxi=INT_MIN;
    int rowIndex=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}


int main(){
    // --> create a 2d array0
    int arr[3][4];
    // int arr[3][4]={8,1,2,3,45,6,9,7,8,9,12,6};
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    // --> taking row wise input
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    //--> taking column wise input
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }

    // --> Printing the array
    cout<<"Printing the elements:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

   /* cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr , target , 3 , 4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    printSum(arr,3,4);
    printColSum(arr,3,4);*/

    cout<<"Maxi row is at index "<<largestRowSum(arr,3,4);
    return 0;
}