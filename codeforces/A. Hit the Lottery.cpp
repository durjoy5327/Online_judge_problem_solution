
#include <iostream>
using namespace std;
int main() {
    int n,count=0,k=0;
    cin>>n;
    if(n>=100){
        k=n/100;
        count=count+k;
        k=0;
        n=n%100;
    }
    if(n>=20){
        k=n/20;
        count=count+k;
        k=0;
        n=n%20;
    }
    if(n>=10){
        k=n/10;
        count = count+k;
        k=0;
        n=n%10;
    }
    if(n>=5){
        k=n/5;
        count= count + k;
        k=0;
        n=n%5;
    }
    if(n<5){
        count = count +n;
    }
    cout<<count<<endl;
    return 0;
}