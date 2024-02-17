#include <bits/stdc++.h>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin>>n;
    string s1="I hate ";
    string s2="I love ";
    string s3=" that ";
    string s4=" it";
    string s;
 int i=0;  
while(n--){
    i++;
    if(i%2!=0){
        s+=s1;
    }
    else{
        s+=s2;
    }
    if(n!=0){
        s+=s3;
    }
}
    cout<<s+s4;
    return 0;
}