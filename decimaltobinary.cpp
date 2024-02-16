#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    int answer=0;
    while(n!=0){
        int bit=n&1;
        answer=(bit*pow(10,i))+answer;
        // cout<<answer<<" ";
        n=n>>1;
        i++;
    }
    cout<<answer<<endl;
}
//code is running properly on online compiler