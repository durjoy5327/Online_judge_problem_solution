class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int,int>mp;
        for(const auto& in : nums){
            mp[in]++;
        }
        vector<int>v;
        for(const auto& in : mp){
            if(in.second>1){
                v.push_back(in.first);
            }
        }
        return v;
    }
};
