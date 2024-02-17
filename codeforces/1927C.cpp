#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
         int n,m,k;
         cin>>n>>m>>k;
         vector<int>a(n);
         vector<int>b(m);
         for(int i=0;i<n;i++){
             cin>>a[i];
         }
         for(int i=0;i<m;i++){
             cin>>b[i];
         }
         int k1=k/2;
         int count1=0,count2=0;
         sort(a.begin(),a.end());
         sort(b.begin(),b.end());
         for(int i=0;i<n;i++){
             if(a[i]<=k){
                 if(a[i]!=a[i+1]){
                     count1++;
                 }
             }
             if(a[i]>k){
                 break;
             }
             
         }
         
          for(int i=0;i<m;i++){
             if(b[i]<=k){
                 if(b[i]!=b[i+1]){
                     count2++;
                 }
             }
             if(b[i]>=k){
                 break;
             }
             
         }
         if(count1>=k1 && count2>=k1){
             cout<<"Yes\n";
         }
         else cout<<"No\n";
    }

    return 0;
}
