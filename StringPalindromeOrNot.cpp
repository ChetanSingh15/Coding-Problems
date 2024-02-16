#include<bits/stdc++.h>
using namespace std;

bool valid(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
        return 1; 
    }
    else{
        return 0;
    }
}

char toLowerCase(char ch){
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
        return ch;
    }
    else{
        return ch-'A'+ 'a';
    }
}

string copyString(string s){
    string temp="";
    for(int j=0;j<s.length();j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }
    return temp;
}

bool checkPalindrome(string temp){
    int st=0;
    int e=temp.size()-1;
    while(st<=e){
        if (toLowerCase(temp[st]) != toLowerCase(temp[e])) {
            return false;
        }
        else{
            st++;
            e--;
        }
    }
    return true;
}

int main(){
    string s="c1 O$d@eeD o1c";
    string temp="";
    for(int j=0;j<s.length();j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }
    cout<<temp<<endl;
    string str=copyString(s);
    cout<<checkPalindrome(str);
}