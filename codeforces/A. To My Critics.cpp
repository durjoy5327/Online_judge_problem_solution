#include<iostream>
using namespace std;
int main(){
  int t,a,b,c;
  cin>>t;
  while(t--){
    cin>>a>>b>>c;
    if(a+b>=10|| a+c>=10||c+b>=10){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }

  }
   
    return 0;
}