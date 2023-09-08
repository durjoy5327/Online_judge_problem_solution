class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<long long ,int > it;
        for(auto u: nums) it[u]++;
        for(auto u: it){
            if( u.second>1)
   return true;
        }
   return false;
        }
};