#include <bits/stdc++.h>
using namespace std;
int main() {
   int a,b,c;
   cin>>a>>b>>c;
   int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
   sum1= a+b*c;
   sum2= a*(b+c);
   sum3= a*b*c;
   sum4=(a+b)*c;
   sum5=a+b+c;
   int max=sum1;
   if(max<sum2){
       max=sum2;
   }
    if(max<sum3){
       max=sum3;
   } if(max<sum4){
       max=sum4;
   }
   if(max<sum5){
       max=sum5;
   }
   cout<<max<<endl;
   
    return 0;
}