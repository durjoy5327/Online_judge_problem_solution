#include<iostream>
using namespace std;

int main(){
      int k=1;
          int l=1;
    for(int i=1;k*l<82;i++){
        cout<<k<<"x"<<l<<"="<<k*l<<endl;
                l++;
        if(l==10){
            k++;
            l=1;
        }
        if(k==10){
            break;
        }
        
    }
    return 0;
}