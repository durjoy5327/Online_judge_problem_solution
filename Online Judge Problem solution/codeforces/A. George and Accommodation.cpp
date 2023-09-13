#include <iostream>
using namespace std;
int main() {
   int a,b,n,count=0;
   cin>>n;
   while(n--){
       cin>>a>>b;
       if(b-a>1){
           count++;
       }
   }
cout<<count;
    return 0;
}