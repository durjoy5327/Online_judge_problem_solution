#include<iostream>
using namespace std;
#include<string>
int main(){
int n, da=0,an=0; 
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++){
    if(s[i]=='A'){
    an++;
    }
    else{
 da++;
    }
}
if(da<an){
    cout<<"Anton" ;
}
else if( da>an){
        cout<<"Danik" ;
}
else{
    cout<<"Friendship";
}

    return 0;
}