class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,max=0,l=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        if(nums.size()==k) return sum/k;
        max= sum/k;
        for(int i=k,j=0;i<=nums.size();j++,i++){
            sum =sum+ (nums[i] - nums[j]);
          double  l=sum/k;
            if(l>max){
                max=l;
            }
        
        }
        return max;
    }
};