#include <iostream>
#include <string>
#include <set> 
using namespace std;

int main() {
    int t;
    cin >> t;
    string k;
    while (t--) {
        int n, m;
        cin >> n >> m;
        set<char> uniqueChars;
        
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            
            for (char c : s) {
                if (c == 'v' || c == 'k' || c == 'i' || c == 'a') {
                    uniqueChars.insert(c);
                }
            }
        }

        int count = uniqueChars.size(); 
        for(char c: uniqueChars){
            k+=c;
        }
        cout<<k<<endl;
        if (count == 4) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
