#include<iostream>
using namespace std;

int fib(int num){
    int a=0,b=1,sum=0;
    for(int i=3;i<=num;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    if(num==0){
        return 0;
    }
    else if(num==1){
        return 1;
    }
    else{
        return sum;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}