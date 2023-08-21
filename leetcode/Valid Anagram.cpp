class Solution {
public:
    bool isAnagram(string s, string t) {
     map<int ,int > it,f;
     if(s.length()!= t.length()) return false;
     for(int i=0;i<s.length() ;i++){
         it[s[i]]++;
         f[t[i]]++;
     }
     for(int i=0;i<s.length();i++){
         if(it!= f) return false;
     }
     return true;
    }
};