#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
          string a,b,c;
          cin>>a>>b>>c;
          int d=0;
          for(int i=0;i<n;i++){
              if(a[i]!=c[i]&& b[i]!=c[i]){
                  cout<<"YES\n";
                  d++;
                  break;
              }
          }
         if(d==0) cout<<"NO\n";
    }

    return 0;
}