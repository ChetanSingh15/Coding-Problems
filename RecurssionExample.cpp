#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<<"Source "<<src<< " destination "<<dest<<endl;
    
    // Base case
    if(src==dest){
        cout<<"Pauch gaya"<<endl;
        return ;
    }

    // processing - ek step aage badh jao
    src++;

    // Recurssive call
    return reachHome(src,dest);
}

int main(){
    int src = 1;
    int dest = 10;

    reachHome(src,dest);
    return 0;
}