class Solution {
public:
    int findMin(vector<int>& nums) {
        int l= 0 , r= nums.size() -1;
       for(int i=0;i< nums.size()-1;i++){
           if(nums[i] > nums[i+1]) return nums[i+1];
           
       }
       return nums[0];
    }
};