#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, k;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] <= 'z' && s[i] >= 'a') {
            k += s[i];
        }
    }

    sort(k.begin(),k.end());
    string l;
    for(int i=0;i<k.length();i++){
        if(k[i]!=k[i+1]){
            l+=k[i];
        }
    }
    cout<<l.length();
    return 0;
}
