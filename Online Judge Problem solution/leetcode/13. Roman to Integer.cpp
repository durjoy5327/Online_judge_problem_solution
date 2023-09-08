class Solution {
public:
    int romanToInt(string s) {
         unordered_map<char,int>show;
        int l =s.length();
        int ans=0;
        show['I']= 1;
        show['V']= 5;
        show['X']= 10;
        show['L']= 50;
        show['C']= 100;
        show['D']= 500;
        show['M']= 1000;
        for(int i=0;i<l;i++){
            if(show[s[i]] <show[s[i+1]]){
                ans-=show[s[i]];
            }
            else{
                ans+=show[s[i]];
            }
        }
        return ans;
    }
};