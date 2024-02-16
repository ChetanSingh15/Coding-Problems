#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;

    int **arr=new int*[row];

    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    // Creation of dynamic 2D array done

    // Taking input for dynamic 2D array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //  Printing the dynamic 2D array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Releasing memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }

    delete []arr;


    // How to create a 2D array dynamically
    // Input/Output
    // Memory free kaise karani h


    return 0;
}