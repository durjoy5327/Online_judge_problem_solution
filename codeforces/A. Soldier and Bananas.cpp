#include <iostream>

using namespace std;
int main() {
 int k,w,n,total=0,bw;
 cin>> k>> n>>w;
for(int i=1;i<w+1;i++){
total+= k*i;
}
bw= total-n;
if(bw>0){
    cout<< bw;
}
else{
    cout<<'0';
}
    return 0;
}