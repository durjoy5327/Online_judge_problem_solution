#include <iostream>
using namespace std;
#include<vector>
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int>a(n);
      int c=0;
      for(int i=0;i<n;i++){
          cin>>a[i];
          if(i+1 == a[i]){
              c++;
          }
      }
      if( c%2!=0){
          c++;
      }
      cout<<c/2<<endl;
  }
    return 0;
}