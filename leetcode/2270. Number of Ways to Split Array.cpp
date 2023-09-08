class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int count=0;
        long long int n= nums.size();
        vector<long long int>a(n),b(n);
        a[0]=nums[0];
        for(int i=1;i<n-1;i++){
            a[i]= a[i-1]+nums[i];
        }
        b[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            b[i]= b[i+1]+nums[i];
        }
        
        for(int i=0;i<n-1;i++){
            if(a[i]>=b[i+1]){
                count++;
            }
        }
        return count;
    }
};