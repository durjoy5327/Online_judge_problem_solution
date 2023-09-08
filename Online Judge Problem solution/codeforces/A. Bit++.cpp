#include <iostream>
using namespace std;
int main() {
int x=0,n;
cin>>n;
char s[4];
for(int i=0;i<n;i++){
    cin>>s;
    if(s[1]=='+'){
    x++;
    }
    else {
        x--;
    }
}
cout<<x;
    return 0;
}