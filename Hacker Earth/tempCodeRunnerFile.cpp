#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    map<int, multiset<string>> mp;

    for (int i = 0; i < t; i++) {
        string s;
        int a;
        cin >> s >> a;
        mp[a].insert(s);
    }
    auto last= --mp.end();
    while(true){
        auto &students= last->second;
        int marks= last->first;
        for(auto student:students){
            cout<<student<<" "<<marks<<endl;
        }
        if(last== mp.begin()) break;
        last--;
    }

    

    return 0;
}
