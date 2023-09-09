#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, count = 0;
    cin >> n >> x;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    int left = 0, right = n - 1;
    
    while (left <right) {
        if (a[left] + a[right] <= x) {
            count++;
            left++;
            right--;
        } else {
            right--;
            count++;
        }
    }
     if (left == right) {
        count++;
    }
    
    cout << count;
    
    return 0;
}
