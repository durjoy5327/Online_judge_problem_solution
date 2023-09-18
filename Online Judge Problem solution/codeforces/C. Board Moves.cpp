#include <iostream>
using namespace std;
int main() {
   long long int n,sum=0;
   int t;
   cin>>t;
   while(t--){
       cin>>n;
       for(long long int i=1;i<=(n/2);i++){
           sum+=(i*i*8);
       }
       cout<<sum<<endl;
       sum =0;
   }

    return 0;
}