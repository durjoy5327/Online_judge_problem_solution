#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,p,q,count=0;
    cin>>n;
    vector<int>a;
    cin>>p;
    a.resize(p);
    for(int i=0;i<p;i++){
        cin>>a[i];
    }
    cin>>q;
     a.resize(p+q);
    for(int i=p;i<p+q;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(a[i]!=a[i+1]){
            count++;
        }
    }
    if(count==n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";
    return 0;
}