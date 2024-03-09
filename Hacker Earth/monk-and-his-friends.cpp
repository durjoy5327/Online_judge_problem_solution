#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
         int n,m;
         cin>>n>>m;
           multiset< long long >s;
        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            s.insert(a);
        }
        for(int i=0;i<m;i++){
           long long a;
            cin>>a;
            auto it= s.find(a);
            if(it!=s.end()){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
               
            }
             s.insert(a);
        }
}

    return 0;
}