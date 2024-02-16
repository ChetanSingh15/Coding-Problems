#include<iostream>
using namespace std;

int score=15;

void a(int& i){
    cout<<i<<endl;
    cout<<"Score in a "<<score<<endl;
}

void b(int &i){
    cout<<i<<endl;
    cout<<"Score in b " <<score<<endl;
}

int main(){
    int i=6;
    cout<<"Score in main "<<score<<endl;
    a(i);
    b(i);
    return 0;
}