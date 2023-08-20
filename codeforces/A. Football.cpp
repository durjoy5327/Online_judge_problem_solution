#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s;
    cin>>s;
   int count=1;
   for(int i=0;i<s.length();i++){
    if(s[i]==s[i+1]){
       
        count++;
        if(count>=7)     {
            cout<<"YES";
            return 0;
        }
    }
    else{
        count=1;
    }
   }
   cout<<"NO";
    return 0;
}