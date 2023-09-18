#include <iostream>
using namespace std;
void sol(){
       long long int n,sum=0;
     cin>>n;
       for(long long int i=1;i<=(n/2);i++){
           sum+=(i*i*8);
       }
       cout<<sum<<endl;
}
int main() {
 
   int t;
   cin>>t;
   while(t--){
      sol();
   }
 
    return 0;
}