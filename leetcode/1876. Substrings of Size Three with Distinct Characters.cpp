class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int>who;
        if(s.size()<3) return 0;
        int ans=0;
        who[s[0]]++;
        who[s[1]]++;
        who[s[2]]++;
        if(who.size()==3) ans++;
        for(int i=3,j=0;i<s.length();i++,j++){
            who[s[i]]++;
            who[s[j]]--;
            if(who[s[j]]==0) who.erase(s[j]);
            if(who.size()==3) ans++;
        } return ans;
    }
};