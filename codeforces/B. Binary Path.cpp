#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
       string arr[2][n];
       for(int i=0;i<2;i++){
           string s;
           cin>>s;
           for(int j=0;j<n;j++){
               arr[i][j]= s[j];
           }
       }
       string ans= arr[0][0];
       long long int ways=1,i=0,j=0,x=1;
       while(j<n-1){
        if(i==0){
            if(arr[i+1][j]=="0"&& arr[i][j+1]=="1"){
            ans+=arr[i+1][j];
            i++;
            ways=x;
            x=1;
        }
        else if(arr[i+1][j]==arr[i][j+1]){
            ans+=arr[i][j+1];
            j++;
            x++;
        }
        else{
            ans+=arr[i][j+1];
            j++;
            x=1;
        }
        }
        else{
            ans+=arr[i][j+1];
            j++;
        }
        if(i==0){
            ans+=arr[i+1][n-1];
            ways=x;
        }
       
       }
        cout<<ans<<"\n"<<ways<<endl;

    }
    
    return 0;
}
