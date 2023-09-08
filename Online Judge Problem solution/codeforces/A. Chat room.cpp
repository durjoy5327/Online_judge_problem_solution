#include<iostream>
using namespace std;
#include<string>

int main(){
   string s,k="hello";
      int j=0,count=0;
   cin>>s;
   for(int i=0;i<s.length();i++){
 
    if(s[i]==k[j]){
        count++;
        j++;
    }
   }
   if(count==5){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }
    return 0;
}