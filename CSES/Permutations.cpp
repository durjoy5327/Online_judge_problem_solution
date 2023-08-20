#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>> n;
    if(n==1){
        cout << "1";
    }
   else if( n==2|| n==3){
        cout<< "NO SOLUTION";
    }
    else if( n==4){
        cout<< " 2 4 1 3";
    }
    else{
        
        for(int i=n;i>=1;i--){
        if(i%2==0){
            cout<<" "<< i;
        }
    }
    for(int j=n;j>=1;j--){
        if(j%2!=0){
            cout<< " " <<j;
        }
    }
    }
    return 0;
}