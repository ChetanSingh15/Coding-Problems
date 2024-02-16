#include<iostream>
using namespace std;

void reverse(string& str,int i,int j){
    cout<<"Call recieved for "<<str<<endl;
    // base case
    if(i>j){
        return ;
    }

    swap(str[i],str[j]);
    i++;
    j--;

    // Rcurssive Call
    reverse(str,i,j);
}

int main(){
    string s="abcdegshdgasgk";
    cout<<endl;
    reverse(s,0,s.length()-1);
    cout<<endl;
    cout<<s<<endl;
    return 0;
}