#include <bits/stdc++.h>
using namespace std;
int main() {
   int T;
   cin>>T;
   while(T--){
       long long n,k;
       cin>>n>>k;
       multiset<long long> ms;
       for(long long i=0;i<n;i++){
           long long  c;
           cin>>c;
           ms.insert(c);
       }
       long long sum=0;
       for(long long i=0;i<k;i++){
          auto it= (--ms.end());
          long long cand=*it;
          sum+=cand;
          ms.erase(it);
          ms.insert(cand/2);
       }
       cout<<sum<<endl;
   }

    return 0;
}