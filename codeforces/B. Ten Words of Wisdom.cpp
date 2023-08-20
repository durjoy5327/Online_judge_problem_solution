#include<iostream>
using namespace std;
int main(){
   int t,n,a,b;
   cin>>t;
   while(t--){
    int max=0;
    int k;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a>>b;
      if(a<11 && b>max){
         max = b;
        k=i+1;
      }
    }
    
    cout<<k<<endl;
   }

    return 0;
}