#include <iostream>
using namespace std;
int main() {
   long long int n, k, count = 0,a[10000];
    cin >>n  >> k;
  
    k=k-1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int j = 0; j < n; j++) {
        if (a[j] >= a[k] && a[j]>0) {
            count++;
        }
    } 
    
    cout << count;
    return 0;
}