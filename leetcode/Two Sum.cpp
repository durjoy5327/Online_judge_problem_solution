class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<long long int, int> oper;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(oper.find(target-nums[i])==oper.end()) oper[nums[i]] = i;
            else {
                res.push_back(oper[target-nums[i]]);
                res.push_back(i);
            }
        }
        return res;
    }
};