#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0,m=n-1;
        for(int i=0;i<n-1;i++){
            if(a[l]==a[i]){  
                if( i==n-1||a[i]!=a[i+1]){
                    l=i;
                    break;
                }
            }
        }
        if(l==n-1){
            cout<<0<<endl;
            continue;
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]!=a[i-1]){
                if(i == 0 || a[l]!=a[i] ) {
                    m=i;
                    break;
                }
            }
        }
        cout<<m-l-1<<endl;

    }


    return 0;
}
