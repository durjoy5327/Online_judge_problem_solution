#include<iostream>
using namespace std;
#include<cstdlib>
#include<algorithm>
#include<vector>
int main(){
   long long t,n,k,sum=0,ans=0,count=0,maxi=0;
  
   cin>> t;
   while(t--){
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
      count++;
      if(i==n-1 || abs(a[i]-a[i+1])>k){
        maxi=max(maxi,count);
        count=0;
      }
    }
    ans = n-maxi;
    cout<<ans<<endl;
ans=0;
maxi=0;
count=0;
   }
    return 0;
}