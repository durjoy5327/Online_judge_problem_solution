#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        float ans;
        ans = a>b ? (float)((float)(a-b)/2)/c : (float)((float)(b-a)/2)/c;
        cout<<ceil(ans)<<endl;
}
}