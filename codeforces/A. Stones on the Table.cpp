#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
   string s;
   int n,c=0;//RRG
   cin>>n;
   cin>>s;
   for(int i=0;i<s.length();i++){
    if(s[i]==s[i+1]){
        c++;
    }
   }
    cout<<c;
    return 0;
}