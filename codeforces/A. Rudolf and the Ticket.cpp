#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> a(n);
        vector<int> b(m);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        int count = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int sum = a[i] + b[j];
                if (sum <= k) {
                    count++;
                }
            }
        }
        
        cout << count << endl;
    }

    return 0;
}
