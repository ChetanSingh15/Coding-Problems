#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";

    cout<<arr<<endl;
    // attention here
    cout<<ch<<endl;

    char *c=&ch[0];
    // Print entire string
    cout<<c<<endl;

    char temp='z';
    char *p=&temp;
    cout<<p<<endl;//Will print till it gets a null character


    return 0;
}