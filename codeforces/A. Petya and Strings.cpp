#include <iostream>
#include<string>
using namespace std;
int main() {
    string a,b;
    cin>> a>>b;
   for(int i=0;i<a.length();i++){
    a[i] = tolower(a[i]);
    b[i] = tolower(b[i]);
   }
    for(int i=0;i<a.length();i++){
        if(a[i]>b[i]){
            cout<<1;
            break;
        }
        else if(a[i]<b[i]){
            cout<<-1;
            break;
        }
        if(a==b){
            cout<<0;
            break;
        }
    }


    return 0;
}