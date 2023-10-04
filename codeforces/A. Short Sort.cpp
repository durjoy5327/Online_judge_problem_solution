#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int t;
  cin>>t;
  while(t--){
      string s;
      cin>>s;
      if(s=="abc"){
          cout<<"Yes\n";
          continue;
      }
      string s1,s2,s3;
      s1=s;
      s2=s;
      s3=s;
      swap(s1[0],s1[1]);
      if("abc"==s1){
          cout<<"Yes\n";
          continue;
      }
      swap(s2[1],s2[2]);
       if("abc"==s2){
          cout<<"Yes\n";
          continue;
      }
      swap(s3[0],s3[2]);
       if("abc"==s3){
          cout<<"Yes\n";
          continue;
      }
      cout<<"NO\n";
  }
  return 0;
 
}