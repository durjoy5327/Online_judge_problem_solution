#include<iostream>
using namespace std;
int main()
{
int t,l,r;
cin>>t;
while(t--)
{
cin>>l>>r;
if(r<2*l ) cout<<"-1 -1\n" ;
else cout<<l<<" "<<2*l<<endl;
}
}