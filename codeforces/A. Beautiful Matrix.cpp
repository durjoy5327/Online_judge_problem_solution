#include <iostream>
using namespace std;
int main() {


    int a[5][5],k;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
               k = abs(i+1 -3  )+ abs(j+1- 3);
               cout<<k;
               return 0;
            }
        }
    }
    return 0;
}
