class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int ,int> find;
        for(int n :nums){
            find[n]++;
        }
        int n= nums.size();
        n=n/2;
        for(auto k : find){
            if(k.second>n){
                return k.first;
            }
        } return 0;
    }
};