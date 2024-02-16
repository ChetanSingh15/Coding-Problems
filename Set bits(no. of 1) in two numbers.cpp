#include<iostream>
using namespace std;

int bit(int x,int y){
    int a=0;
    while(x!=0){
        if(x&1==1){
            a++;
        }
        x=x>>1;
    }
    int b=0;
    while(y!=0){
        if(y&1==1){
            b++;
        }
        y=y>>1;
    }
    return a+b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<bit(a,b)<<endl;
    return 0;
}