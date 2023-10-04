#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,min=INT_MAX,k=-1;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(min>=a[i]){
                min=a[i];
                k=i;
            }
        }
        a[k]=min+1;
        int sum=1;
        for(int i=0;i<n;i++){
            sum= sum*a[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}