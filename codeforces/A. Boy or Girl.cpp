#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string s;
    int c=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1]){
                c++;
        }
    }
    if(c%2==0){
            cout<<"CHAT WITH HER!"<<endl;
        }
        else{
            cout<<"IGNORE HIM!"<<endl;
        }
    return 0;
}