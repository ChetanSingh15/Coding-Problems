#include<iostream>
using namespace std;

void update2(int &n){
    n++;
}

void update1(int n){
    n++;
}

int main(){

    /*int i=5;

    // create a ref variable
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;*/

    int n=5;

    cout<<"Before "<<n<<endl;
    update1(n);
    cout<<"After "<<n<<endl;

    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"After "<<n<<endl;

   return 0;
}