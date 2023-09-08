#include<iostream>
using namespace std;

int main(){
   int n,a,b,c,d;
   cin>>n;
   while(true){
    n++;
    a=n/1000;
    b= n/100 %10;
    c= n/10 %10;
    d=n%10;
    if(a!=b && a!=c&& a!=d && b!=c && b!=d && c!=d){
        cout<<n;
        return 0;
    }

   }
    return 0;
}