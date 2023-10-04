#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N;
  cin>>N;
  if(N<=2) {
      cout<<"Yes\n";
      return 0;
  }
  int k=sqrt(N);
  for(int i=2;i<=k;i++){
      if(N%i==0){
          cout<<"No\n";
          return 0;
          
      }
  }
cout<<"Yes\n";
  return 0;

}