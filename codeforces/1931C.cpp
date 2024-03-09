#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int first=0,last=n-1;
        while(first<n&& a[first]==a[0]){
            first++;
        }
         while(last>=0&& a[n-1]==a[last]){
            last--;
        }
        int ans=0;
        if((n>first&& last>=0)&&a[first]!=a[last]){
            int MAF= n-first;
            int MAL= last+1;
            ans= min(MAF,MAL);
        }
        else{
            ans=max(0,last-first+1);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}