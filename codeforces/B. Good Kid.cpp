#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, min = 10, sum = 1, minI = 0;
        cin >> n;
        vector<int> a;
        while (n--)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        for (int i = 0; i < a.size(); i++)
        {
            if (min > a[i])
            {
                min = a[i];
                minI = i;
            }
        }

        a[minI]++;
        for (int i = 0; i < a.size(); i++)
        {
            sum *= a[i];
        }
        cout << sum << endl;
    }
}