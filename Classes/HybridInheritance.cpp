#include<iostream>
using namespace std;

class A{
    public:
    void f1(){
        cout<<"Inside function 1"<<endl;
    }
};

class B:public A{
    public:
    void f2(){
        cout<<"Inside function 2"<<endl;
    }
};

class D{
    public:
    void f4(){
        cout<<"Inside function 4"<<endl;
    }
};

class C: public A, public D{
    public:
    void f3(){
        cout<<"Inside function 3"<<endl;
    }
};


int main(){
    A o1;
    o1.f1();
    B o2;
    o2.f1();
    o2.f2();
    C o3;
    o3.f1();
    o3.f4();
    o3.f3();
    return 0;
}