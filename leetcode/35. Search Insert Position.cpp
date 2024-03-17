#include <bits/stdc++.h>
using namespace std;

    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]>target){
                return i;
            }
            if(i==n-1) return i+1;
        }
        return 0;
    }
// int main() {
//     int n,target;
//     cin>>n>>target;
//     vector<int>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<searchInsert(a,target);

//     return 0;
// }




















