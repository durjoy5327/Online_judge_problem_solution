#include<iostream>
using namespace std;
#include<string>
int main(){
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[s.length()-(i+1)]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}