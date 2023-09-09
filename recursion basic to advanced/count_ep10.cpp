#include <bits/stdc++.h>
using namespace std;

int helper(int n,int count){
    if(n==0) return count;
    int temp= n%10;
    if(temp==0){
        return helper(n/10,count+1);
    }
    return helper(n/10,count);
}

int main(){
   
    cout<<helper(30120350,0);
    return 0;
}