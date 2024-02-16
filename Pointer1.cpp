#include<iostream>
using namespace std;

int main(){
    int num=5;
    cout<<num<<endl;
    // address of operator - &
    cout<<"Address of num is "<<&num<<endl;

    // Pointer to int is created, and pointing to num address
    int *ptr=&num;

    cout<<"Address of num is : " <<ptr<<endl;
    cout<<"Value of num is : "<<*ptr<<endl; 

    double d=4.2;
    double *p2=&d;
    cout<<"Address of d is : " <<p2<<endl;
    cout<<"Value of d is : "<<*p2<<endl; 

    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"size of double pointer is "<<sizeof(p2)<<endl; //This is for my system generally it comes 8

    return 0;
}