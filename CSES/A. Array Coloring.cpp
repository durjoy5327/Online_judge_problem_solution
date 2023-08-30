#include <iostream>
#include<vector>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       int sum1=0,sum2=0,j=1;
       cin>>n;
       vector<int>a(n);
       for(int i=0;i<n;i++){
           cin>>a[i];
           int j=1;
           if(a[i]==j){
               sum1+=a[i];
           }
           else{
               sum2+=a[i];
           }
       }
       if((sum1%2==0 && sum2%2==0)||sum1%2!=0 && sum2%2!=0){
           cout<<"YES\n";
       }
       else{
           cout<<"NO\n";
       }
   }
   
    return 0;
}