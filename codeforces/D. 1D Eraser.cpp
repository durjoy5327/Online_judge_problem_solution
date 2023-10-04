#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,count=0;
        cin>>n>>k;
       string a;
       cin>>a;
       for(int i=0;i<n;i++){
           if(a[i]=='B'){
               count++;
               i =i+(k-1);
           }
       }
       cout<<count<<endl;
        
    }
    return 0;
}