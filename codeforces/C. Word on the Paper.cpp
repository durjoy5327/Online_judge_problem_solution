#include<iostream>
using namespace std;
#include<string>
int main(){
   int n;
   string s,k="";
   cin>>n;
   while(n--){
      for(int i=0;i<8;i++){
            cin>>s;
         for(int j=0;j<8;j++){
            if(s[j]>='a'&& s[j]<='z'){
              k+=s[j];
            }
          }
      }
      cout<<k<<endl;
      s=" ";
      k=" ";
   }

    return 0;
}