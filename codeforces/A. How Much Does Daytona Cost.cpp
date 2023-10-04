#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
        int n,k,l=0;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k){
                l++;
            }
        }
        if(l){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
   }
    return 0;
}
