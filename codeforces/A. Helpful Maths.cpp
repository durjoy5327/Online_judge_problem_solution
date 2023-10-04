#include <algorithm>
#include <iostream>
#include<string>
using namespace std;
int main() {
    string s,k;
    cin>>s;
    for(int i=0;i<s.length();i++){

        if(isdigit(s[i])){
           k+=s[i];
        }
    }
    sort(k.begin(),k.end());
    cout<<k[0];
for(int i=1;i<k.length();i++){
    cout<<"+"<<k[i];
}

    return 0;
}
