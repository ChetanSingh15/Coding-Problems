#include<bits/stdc++.h>
using namespace std;

int main(){
    //max-heap
    priority_queue<int> maxi;

    //min-heap
    priority_queue<int , vector<int> , greater<int> > mini;

    maxi.push(3);
    maxi.push(5);
    maxi.push(9);
    maxi.push(11);
    maxi.push(1);
    maxi.push(2);
    maxi.push(6);
    maxi.push(4);

    cout<<"Size-->"<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    cout<<"Empty or not "<<maxi.empty();
}