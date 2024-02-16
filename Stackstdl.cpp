#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string> s;

    s.push("HI");
    s.push("CHETAN");
    s.push("SINGH");
    cout<<"Top Element "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;
    cout<<"Size of stack "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;


     stack<int> p;

    p.push(5);
    p.push(7);
    p.push(11);
    cout<<"Top Element "<<p.top()<<endl;
    p.pop();
    cout<<"Top Element "<<p.top()<<endl;
    cout<<"Size of stack "<<p.size()<<endl;
    cout<<"Empty or not "<<p.empty()<<endl;
}