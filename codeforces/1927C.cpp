#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n),b(m);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]=1;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            if(mp[b[i]]==1) mp[b[i]]=6;
            else if(mp[b[i]]==0) mp[b[i]]=3;
        }
        int c=k/2;
        int d=k/2;
        for(int i=1;i<=k;i++){
            if(mp[i]==1) c--;
            if(mp[i]==3) d--;
            if(mp[i]==0) c=-1;
        }
        if(c>=0&& d>=0) cout<<"Yes\n";
        
        else cout<<"No\n";
        
    }

    return 0;
}
