class Solution {
public:
    int strStr(string s, string n) {
        int s1= s.length();
        int n1= n.length();
        for(int i=0;i<=s1-n1;i++){
            int j=0;
            for(;j<n.length();j++){
                if(s[i+j]!=n[j]) break;
            }
            if(j==n.length()) return i;
        }
        return -1;
    }
};