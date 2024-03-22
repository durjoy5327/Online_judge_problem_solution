class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                count++;
            }
        }
        return count*(count+1)/2;
    }
    
};