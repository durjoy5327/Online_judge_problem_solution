#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int a=0,b=s.length();
        for(int i=0;i<b;i++){
            if(s[i]=='B'){
                a=i;
                break;
            }
        }
        for(int i=b-1;i>=0;i--){
            if(s[i]=='B'){
                b=i+1;
                break;
            }
        }
        cout<<b-a<<endl;
        
    }

    return 0;
}
