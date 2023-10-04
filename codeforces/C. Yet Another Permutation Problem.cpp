#include<iostream>
#include<set>
using namespace std;
#define ll long long 
int main(){
    ll int t;
    cin>>t;
    while(t--){
       ll int n;
        cin>>n;
        set<ll>v;
        for(int i=2;i<=n;i++){
            v.insert(i);
        }
         cout<<1<<" ";
         while(!v.empty()){
            ll first;
             first = *v.begin();
                v.erase(v.begin() );
                cout<<first<<" ";
         for(ll j=first*2;j<=n;j+=j){
            cout<<j<<" ";
            v.erase(j);
         }
    }
             cout<<endl;
         }

    return 0;
}