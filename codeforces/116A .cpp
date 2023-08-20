#include<iostream>
using namespace std;
#include<string>
int main(){
    int n,a,b,max=0,sum=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        sum+=(-a+b);
        if(sum>max){
            max= sum;
        }
    }
    cout<<max;
    return 0;
}