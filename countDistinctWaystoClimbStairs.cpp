#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int countDistinctWays(int nStairs) {
    //base case
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1; 
    }

    // Recursive Realtion 
    int ans=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);

    return ans;
}

int main(){
    int n=5;
    int ans=countDistinctWays(n);
    cout<<ans<<endl;
    return 0;
}