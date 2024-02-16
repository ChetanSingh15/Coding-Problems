#include<iostream>
using namespace std;

void print(int n){ 
       // This will print like this - ......9 8 7 6 5 4 3 2 1  
    // base case
    if(n==0)
        return ;

    cout<<n<<" ";
    
    // Recurssive Relation
    print(n-1); // Tail Recurssion
}

// void print(int n){ 
//     // This will print like this -  1 2 3 4 5 6 7 8 9......
//     // base case
//     if(n==0)
//         return ;

//     // Recurssive Relation
//     print(n-1); // Head Recurssion

//     cout<<n<<" ";
// }

int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}