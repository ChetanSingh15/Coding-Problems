#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Number is not a prime number"<<endl;
    }
    else{
        cout<<"Number is a prime number"<<endl;
    }
    return 0;
}