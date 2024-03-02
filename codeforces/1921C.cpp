#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       long long int n,f,a,b;
       cin>>n>>f>>a>>b;
       long long int arr[n];
       for(long long int i=0;i<n;i++){
           cin>>arr[i];
       }
       long long int pre=0;
       for(long long int i=0;i<n;i++){
           
          long long int x= abs(a*(arr[i]-pre));
          long long int mini= min(x,b);
           f=f-mini;
           pre=arr[i];
       }
       if(f>0){
           cout<<"Yes\n";
       }
       else{
           cout<<"No\n";
       }
       
   }

    return 0;
}