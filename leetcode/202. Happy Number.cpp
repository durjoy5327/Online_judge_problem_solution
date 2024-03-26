#include<bits/stdc++.h> 
using namespace std;
 bool isHappy(int n){
    if(n==1|| n==7) return 1;
    int sum =n , x=n;
    while(sum>9){
        sum=0;
        while(x>0){
            int d= x%10;
            sum+= d*d;
            x=x/10;
        }
        if(sum==1) return 1;
        x=sum;
    }
    if(sum==7) return 1;
    else return 0;

 }
// int main(){
//     int n;
//     cin>>n;
//     if(isHappy(int n)) cout<<"It is happy number\n";
//     else cout<<"It is not happy number\n";
//     return 0;
// }