#include<iostream>
using namespace std;

int main(){
       // Declare a jagged array of integers
    int* jaggedArray[3];  // Array of pointers to integers

    // Initialize rows with different number of columns
    jaggedArray[0] = new int[2]{1, 2};
    jaggedArray[1] = new int[3]{3, 4, 5};
    jaggedArray[2] = new int[4]{6, 7, 8, 9};

    // Access and print elements
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < i + 2; ++j) {
            cout << jaggedArray[i][j] << " ";
        }
        cout<<endl;
    }

    // Deallocate memory
    for (int i = 0; i < 3; ++i) {
        delete[] jaggedArray[i];
    }
    return 0;
}