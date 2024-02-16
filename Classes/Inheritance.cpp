#include<iostream>
using namespace std;


class Human{

    private:
    int height;
    public:
    int weight=75;
    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
};

class Male: public Human {
    public:
    string color;

    void Sleep(){
        cout<<"Male sleeping"<<endl;
    }

    int getWeight(){
        return this->weight;
    }
};

int main(){

    Male m1;
    cout<<m1.weight<<endl;
    // cout<<m1.weight<<endl;





   /* Male Mard;

    cout<<Mard.age<<endl;
    cout<<Mard.height<<endl;
    cout<<Mard.weight<<endl;

    cout<<Mard.color<<endl;
    Mard.setWeight(75);
    cout<<Mard.weight<<endl;
    Mard.Sleep();

    */



    return 0;
}