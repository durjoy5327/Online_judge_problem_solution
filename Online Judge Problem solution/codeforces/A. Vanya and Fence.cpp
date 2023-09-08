#include<iostream>
using namespace std;
#include<string>
int main(){
    int n, h,a,sum=0;
    cin>>n>>h;
    while(n--){
        cin>>a;
        if(a>h){
            sum+=2;
        }
        else {
            sum+=1;
        }
    }
    cout<<sum;
    return 0;
}