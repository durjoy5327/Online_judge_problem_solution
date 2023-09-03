class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
         int ans = 0,i,j,n=nums.size();
        for(i = 0; i < n; i++){
            for(j = i+1; j < n; j++){
                if(nums[i]+nums[j] < target){
                    ans++;
                }
            }
        }
        return ans;
    }
};