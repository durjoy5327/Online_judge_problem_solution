#include <bits/stdc++.h>
using namespace std;
int main() {
     long long int n,k,l=0,r=0,i=1 ,j=1;
    cin>>n>>k;
    //1 3 5 7 9 2 4 6 8 10
    n= (n+1)/2;
    if(k>n){
        cout<<2*(k-n);
    }
    else{
        cout<<2*(k-1);
    }
    return 0;
}