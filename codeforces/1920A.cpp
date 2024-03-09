#include <bits/stdc++.h>
#include <vector>
using namespace std; 

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], x[n];
        vector<int> c;
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> x[i];
        }
        int mini = INT_MAX, maxi = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                maxi = max(maxi, x[i]);
            } else if (a[i] == 2) {
                mini = min(mini, x[i]);
            } else {
                int h = x[i];
                c.push_back(h);
            }
        }
        int k = (mini - maxi) + 1;
        for (int i = 0; i < c.size(); i++) {
            if (mini >= c[i] && maxi <= c[i]) {
                k--;
            }
        }
        if (k > 0)
            cout << k << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
