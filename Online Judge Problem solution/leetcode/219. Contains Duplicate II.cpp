class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      unordered_map<int , int> find;
        for(int i=0;i<nums.size();i++){
            if(find.count(nums[i])&& i-find[nums[i]]<=k){
                return true;  
            }
            find[nums[i]]=i;
        }
        return false;
    }
};