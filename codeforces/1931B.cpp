#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;

      long long int a[n];
       long long int sum = 0;

        for (long long int i = 0; i < n; i++) {
            cin >> a[i];
            sum+=a[i];

        }
        int k = sum / n;
        int count = 0;

        for (long long int i = 0; i < n; i++) {
            if (a[i] >= k) {
                count += (a[i] - k);
            } 
            else {
                int l=k-a[i];
                if(count>=l){
                    count =count - (k-a[i]);
                }
                
            }
        }        if (count == 0) 
            cout << "Yes\n";
        else 
            cout << "No\n";
    }

    return 0;
}
