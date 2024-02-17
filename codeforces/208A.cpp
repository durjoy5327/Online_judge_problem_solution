#include <iostream>
using namespace std;
int main() {
    string s,k;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if((s[i]=='W'&&s[i+1]=='U')&&s[i+2]=='B'){
            i+=2;
            k+=" ";
            continue;
        }
        k+=s[i];
    }
cout<<k;
    return 0;
}