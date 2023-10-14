#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,s=INT_MAX;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            cout<<0<<endl;
            return 0;
        }
        if(s>abs(a[i])){
            s=abs(a[i]);
        }
    }
    cout<<s<<endl;

return 0;
}