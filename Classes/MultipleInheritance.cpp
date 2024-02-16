#include<iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<  "Animal Barking "<<endl;
    } 
};

class Human {
    public:
    string color;

    public:
    void speak(){
        cout<<"Human Speaking "<<endl;
    }

};

// Multiple Inheritance
class Hybrid: public Animal, public Human{
    
};

int main(){
    Hybrid h;
    h.bark();
    h.speak();
    cout<<h.color<<endl;
    cout<<h.age<<endl;
    cout<<h.weight<<endl;
    return 0;
}