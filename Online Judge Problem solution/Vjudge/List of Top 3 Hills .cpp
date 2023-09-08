#include <iostream>
using namespace std;
int main() {
    int a,n1,n2,n3,temp;
    n1=n2=n3=0;
  for(int i=1;i<11;i++){
      cin>>a;
      if(a>n3){
        n3=a;
        if(n3>n1){
            temp=n3;
            n3=n2;
            n2=n1;
            n1=temp;
        }

        else if(n3>n2){
                temp=n3;
                n3=n2;
                n2=temp;
        }
  }
  }
cout<<n1<<"\n"<<n2<<"\n"<<n3<<endl;
    return 0;
}