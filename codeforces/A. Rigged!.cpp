#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,first=0,second=0,w=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int st,en;
            cin>>st>>en;
            if(i==0){
                first = st;
                second= en;
                w=st;
            }
            else if(first<=st && second<=en){
                w=-1;
            }
        }
        cout<<w<<endl;
    }
    
    
    return 0;
}