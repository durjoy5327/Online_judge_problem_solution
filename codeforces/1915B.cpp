#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        int x=0,y=0,z=0;
        for(int i=0;i<3;i++){
            if(a[i]=='A'||b[i]=='A'||c[i]=='A'){
               x++;
            }
            if(a[i]=='B'||b[i]=='B'||c[i]=='B'){
               y++;
            }
            if(a[i]=='C'||b[i]=='C'||c[i]=='C'){
               z++;
            }
        }
        if(x==2){
             cout<<"A\n";
        }
        if(y==2){
             cout<<"B\n";
        }
        if(z==2){
             cout<<"C\n";
        }
    }

    return 0;
}