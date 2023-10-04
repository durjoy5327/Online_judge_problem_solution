#include<bits/stdc++.h>
using namespace std;
vector<long long int>prime;
    bool mark[10000000];
void sieve(long long int n){
  /// 0 and 1 is marked as not prime
  mark[0] = true;
  mark[1] = true;
  /// multiple of 2 marked as not prime
  for (long long int i = 4;i <= n;i += 2){
    mark[i] = true;
  }
  //4 6 8 10 12 14 16 18 20 
  long long int lim = sqrt(n);
  for (long long int i = 3;i <= lim;i += 2){
      
  ///3 5 7 9 11 13 15 17 19
    if (mark[i] == false){
    /// if mark[i] is false then i is prime
      for (long long int j = i+i;j <= n;j += i){
    /// multiple of i marked as not prime
        mark[j] = true;
      }
    }
  }
  for (long long int i = 2;i <= n;i++){
    if (mark[i] == false){
      prime.push_back(i);
    }
  }
}
int main() {
  long long int n;
    cin>>n;
    sieve(500000);
    cout<<prime[n-1];
 
    
    return 0;
}