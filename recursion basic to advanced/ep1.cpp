#include<bits/stdc++.h>
using namespace std;
void print(int n){
    //Base case
    if(n<1) return;
    //Body of the recursion 
    cout<<n <<" ";
    //recursive case 
    //This is the tail recursion
    //this is the last function call
    print(n-1);

}
int main(){
    print(10);

    return 0;
}