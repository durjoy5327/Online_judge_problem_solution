#include <bits/stdc++.h>
using namespace std;
 
bool checkVector( vector<int> &a) {
    int n = a.size();
    int count = 0;
 
    for (int i = 1; i < n-1; i++) {
        if (a[i - 1] * 2 > a[i]) {
            return false;
        }
        if (a[i - 1] <= a[i + 1] && a[i] >= 2 * a[i - 1]) {
            a[i + 1] -= a[i - 1];
            a[i] -= 2 * a[i - 1];
            a[i - 1] = 0;
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            return false;
        }
    }
    return true;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        if (checkVector(a)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}