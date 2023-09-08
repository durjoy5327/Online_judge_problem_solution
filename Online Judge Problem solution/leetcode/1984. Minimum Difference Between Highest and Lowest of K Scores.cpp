class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0,ans=INT_MAX,i=0,j=0;
        for( i=0;i<nums.size();i++){
            count++;
            if(count<k) continue;
            ans = min(ans , nums[i]-nums[j]);
            j++;
        }
        return ans;
    }
};