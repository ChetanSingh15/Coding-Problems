#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        return ch-'A'+'a';
    }
}

char toUpperCase(char ch){
    if(ch>='A'&&ch<='Z'){
        return ch;
    }
    else{
        return ch-'a'+'A';
    }
}

bool checkPalindrome(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(toLowerCase(name[s++])!= toLowerCase(name[e--])){
            return false;
        }
    }
    return true;
}

void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

char getMaxOccCharacter(string s){
    int arr[26]={0};

    for (int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        number = ch-'a';
        arr[number]++; 
    }
    int maxi=-1, ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans =i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
}

int main(){
    // char name[20];
    // cout<<"Enter your name"<<endl;
    // cin>>name;
    // // name[2]='\0';
    // int len=getLength(name);
    // cout<<"Your name is "<<name<<endl;
    // reverse(name , len);
    // cout<<"Length: "<<len<<endl;
    // cout<<"Your name is "<<name<<endl;
    // cout<<"String is Palindrome or not "<<checkPalindrome(name , len)<<endl;
    // cout<<"Change to lowercase: "<<toLowerCase('b')<<endl;
    // cout<<"Change to lowercase: "<<toLowerCase('G')<<endl;
    // cout<<"Change to uppercase: "<<toUpperCase('B')<<endl;
    // cout<<"Change to uppercase: "<<toUpperCase('k')<<endl;
    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;
}
