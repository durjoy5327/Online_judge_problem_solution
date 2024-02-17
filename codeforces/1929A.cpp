#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=(arr[i+1]-arr[i]);
        }
        cout<<sum<<endl;
    }

    return 0;
}