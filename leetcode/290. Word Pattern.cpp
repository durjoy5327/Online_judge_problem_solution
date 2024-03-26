class Solution {
public:
    bool wordPattern(string pa, string s) {
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;
        unordered_map<int,string> mp;
        string l;
        int j = 0;  

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                l += s[i];
            } else {
                mp[j++] = l;
                l = "";
            }
        }
        mp[j] = l;

        if (pa.length() != j + 1) 
            return false;

        for (int i = 0; i < pa.length(); i++) {
            if (mp1.find(pa[i]) == mp1.end() && mp2.find(mp[i]) == mp2.end()) {
                mp1[pa[i]] = mp[i];
                mp2[mp[i]] = pa[i];
            } else if (mp1[pa[i]] != mp[i] || mp2[mp[i]] != pa[i]) {
                return false;
            }
        }
        return true;
    }                                 
};
