#include<iostream>
#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;


class Hero{
    // Properties
    private:
        int health;
    
    public:
        char *name;
        char level;
        static int timeToComplete;

    Hero(){
        cout<<"Simple constructor called"<<endl;
        name = new char[100];
    }
    
    // parameterised constructor

    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this -> health= health;
    }

    Hero(int health,int level){
        // cout<<"this -> "<<this<<endl;
        this -> health= health;
        this -> level = level;
    }
    
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    // copy constructor
    Hero(Hero& temp){
        char *ch =new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"Copy Constructor Called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[ Name "<<this->name<<" , ";
        cout<<"health "<<this->health<<" , ";
        cout<<"level "<<this->level<<"]";
        cout<<endl;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timeToComplete;
    }


    // Destructor
    ~Hero(){
        cout<<"Destructor bhai called"<<endl;
    }
    
};

int Hero::timeToComplete=5;

int main(){

    // cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;

    // Hero a;

    // cout<<a.timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete=10;
    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;









    // static   // Automatically destructor gets called for static objects
    // Hero a;


    // // dynamic
    // Hero *b= new Hero();
    // // manually destructor called for dynamically created objects
    // delete b;













    // Hero hero1;
    // hero1.setHealth(65);
    // hero1.setLevel('C');
    // char name[7]="Babbar";
    // hero1.setName(name);

    // // hero1.print();

    // // use default copy constructor
    // Hero hero2(hero1);
    // // hero2.print();
    // // Hero hero2=hero1;

    // hero1.name[0]='G';
    // hero1.print();

    // hero2.print();

    // hero1=hero2;
    // hero1.print();













    // object created statically
    // Hero a(10);
    // // cout<<"Address of a "<<&a<<endl;
    // a.print();

    // Hero *h= new Hero(11);
    // h -> print();

    // Hero b(11,'D');    
    // b.print();

    // static allocation
    // Hero a;
    // a.setHealth(70);
    // a.setLevel('S');
    // cout<<"Level is "<<a.level<<endl;
    // cout<<"Health is "<<a.getHealth()<<endl;


    // // dynamically
    // Hero *b= new Hero;
    // b->setHealth(85);
    // b->setLevel('A');
    // cout<<"Level is "<<(*b).level<<endl;
    // cout<<"Health is "<<(*b).getHealth()<<endl;

    //  cout<<"Level is "<<b->level<<endl;
    // cout<<"Health is "<<b->getHealth()<<endl;


    // Hero h1;

    // cout<<sizeof(h1)<<endl;

    // cout<<"h1 health is"<<h1.getHealth()<<endl;

    // h1.setHealth(45);
    // h1.setLevel('S');
    // // h1.health=78;
    // // h1.level='S';

    // cout<<"Health is: "<<h1.getHealth()<<endl;;
    // cout<<"Level is: "<<h1.getLevel()<<endl;




    return 0;
}