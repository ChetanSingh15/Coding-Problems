#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;

    q.push(9);
    q.push(5);
    q.push(7);
    q.push(1);
    cout<<"Top Element "<<q.front()<<endl;
    q.pop();
    cout<<"Top Element "<<q.front()<<endl;

    queue<string> s;

    s.push("HI");
    s.push("CHETAN");
    s.push("SINGH");
    cout<<"Top Element "<<s.front()<<endl;
    cout<<"Size of queue before pop "<<s.size()<<endl;
    s.pop();
    cout<<"Top Element "<<s.front()<<endl;
    cout<<"Size of queue "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;



}