#include<iostream>
#include<string>
using namespace std;
int main()
{
   int n,a,b,c,x=0,y=0,z=0;
   cin>>n;
   while(n--){
    cin>>a>>b>>c;
    x+=a;
    y+=b;
    z+=c;
    
   }
if(x==0&&y==0&& z==0){
    cout<<"YES";
}else{
    cout<<"NO";
}
    return 0;
}