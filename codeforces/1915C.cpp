#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
      long long int sum =0;
       for(int i=0;i<n;i++){
           int k;
           cin>>k;
           sum+=k;
       }
       long long int c=sqrt(sum);
       if(c*c ==sum){
           cout<<"YES\n";
       }
       else{
           cout<<"NO\n";
       }
   }

    return 0;
}