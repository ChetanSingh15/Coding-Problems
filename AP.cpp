#include<iostream>
using namespace std;

int AP(int num){
    int Last=3*num+7;
    return Last;
}
int main(){
    int n;
    cin>>n;
    int a=AP(n);
    cout<<a<<endl;

}