#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b=n;
    int a=0;
    while(n!=0){
        int digit=n%10;
        a=(a*10)+digit;
        n=n/10;
    }
    cout<<"Reverse of "<<b<<" is "<<a<<endl;
}