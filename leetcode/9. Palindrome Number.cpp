class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
       long long int temp=x,sum=0;
        while(temp!=0){
            int div = temp%10;
            sum= sum*10 + div;
            temp/=10;
        }
       if(sum==x) return true;
        return false;
    }
};