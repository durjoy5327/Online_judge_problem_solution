#include <iostream>
using namespace std;
int main() {
    int n,sum=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
    int x;
    cin>>x;
    sum+=x;
    if(sum<0){
        count++;
        sum=0;
    }
    }
    cout<<count;
    return 0;
}