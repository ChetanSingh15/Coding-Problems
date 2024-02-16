#include<iostream>
using namespace std;

int power(int n,int y){
    int ans=1;
    for(int i=0;i<y;i++){
        ans=ans*n;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    int c,d;
    cin>>c>>d;
    int e,f;
    cin>>e>>f;
    cout<<power(a,b)<<endl;
    cout<<power(c,d)<<endl;
    cout<<power(e,f)<<endl;
    return 0;
}