#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
        }
        map<int , int>m;
        for(int i=0;i<n;i++){
            int l;
            cin>>l;
            m[v[i]]=l;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)  cout<<v[i]<<" ";
        
        cout<<endl;
        for(int i=0;i<n;i++)  cout<<m[v[i]]<<" ";
       
        cout<<endl;
    }

    return 0;
}