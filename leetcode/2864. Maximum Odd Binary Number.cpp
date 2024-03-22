
#include <bits/stdc++.h>
using namespace std;

 string maximumOddBinaryNumber(string s) {
     int zero=0,one=0;
     for(int i=0;i<s.length();i++){
         if(s[i]=='0'){
             zero++;
         }
         else{
             one++;
         }
     }
     string slast;
     for(int i=0;i<one-1;i++){
         slast+="1";
     }
     for(int i=0;i<zero;i++){
         slast+="0";
     }
     slast+="1";
     return slast;
 }
int main() {
    string s;
    cin>>s;
    cout<<maximumOddBinaryNumber( s);

    return 0;
}