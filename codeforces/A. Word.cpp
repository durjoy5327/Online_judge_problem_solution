#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,s1;
    int low=0,up=0;
    cin>>s;
   for(int i=0;i<s.length();i++){
    if(isupper(s[i])){
        up++;
    }
     if(islower(s[i])){
        low++;
    }
   }
   for(int i=0;i<s.length();i++){
    if(low<up){
      s1+=toupper(s[i]);
    }
    else{
       
           s1+=tolower(s[i]);
    }
   }
    cout<< s1;
    return 0;
}