#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2,sf;
        cin>>s1>>s2;
        int count=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='0' && s2[i]=='0'){
                sf+=s1[i];
                count++;
            }
            else if(s1[i]=='0'){
                sf+=s1[i];
            }
            else if(s2[i]=='0'){
                sf+=s2[i];
            }
            else{
                sf+=s1[i];
                count++;
            }
            if(i==n-1){
                sf+=s2[i];
            }
        }
        cout<<sf<<endl;
        cout<<count<<endl;
    }
        
    
    return 0;
}
