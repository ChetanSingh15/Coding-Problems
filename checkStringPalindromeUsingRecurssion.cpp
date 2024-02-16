#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    // base case
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        i++;
        j--;
        return checkPalindrome(str,i,j);// Rceurssive Call
    }
    
}

int main(){
    string s="abbccjdsbgeccbba";
    bool ans=checkPalindrome(s,0,s.length()-1);
    if(ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}