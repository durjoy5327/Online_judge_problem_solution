#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b(n);
        if(a[0]==1){
            b[0]=2;
        }
        else b[0]=1;
        for(int i=1;i<n;i++){
            b[i]=1;
            b[i]=b[i]+b[i-1];
            if(a[i]==b[i]){
                b[i]++;
            }
        }
        cout<<b.back()<<endl;
    }

    return 0;
}