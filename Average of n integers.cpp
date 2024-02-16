#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter the no. of integers you want average of:"<<"\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        sum=sum+a;
    }
    int b=sum/n;
    cout<<"The average of "<<n<<" integers is: "<<b<<"\n";
    return 0;
}