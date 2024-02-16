#include<iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int nCr(int n,int r){
    int num=fact(n);
    int denom=fact(r)*fact(n-r);
    return num/denom;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"nCr1 is"<<nCr(n,r)<<endl;
    int x,y;
    cin>>x>>y;
    cout<<"nCr2 is"<<nCr(x,y)<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"nCr3 is"<<nCr(a,b)<<endl;
    return 0;
}