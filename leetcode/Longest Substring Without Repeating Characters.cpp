class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int len=0;
        string n;
        for(int i=0;i<s.length();i++){
            int ind= n.find(s[i]);
            if(ind<0) n.push_back(s[i]);
            else{
                s.erase(s.begin(),s.begin()+ind+1);
                i=-1;
                n.clear();
            }
            if(len<n.size()) len = n.size();
        }
        return len;
    }
};