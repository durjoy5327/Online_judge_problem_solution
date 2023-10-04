#include <bits/stdc++.h>
 using namespace std;
int main() {
  
long long n,i, k,sum=0;
  cin>>n;
  sum = n*(n+1)/2;
  for(i=2;i<=n;i++)
  {
      cin>>k;
      sum = sum -k;
  }
  cout<<sum;
    return 0;
}