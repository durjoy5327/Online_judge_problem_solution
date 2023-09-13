#include <bits/stdc++.h>
using namespace std;
int main() {
   int n,count=1,max=0;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   if(a.size()<2){
       cout<<'1';
       return 0;
   }
   for(int i=0;i<n-1;i++){
       if(a[i]<=a[i+1]){
           count++;
       }
       if(max<count){
           max= count;
       }
       if(a[i]>a[i+1]){
           count=1;
       }
       
   }
   cout<<max;
    return 0;
}