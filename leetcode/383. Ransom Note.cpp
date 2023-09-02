class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int ,int>find;
        for(char n: magazine){
            find[n]++;
        }
        for(char n: ransomNote){
            find[n]--;
            if(find[n]<0) return false;
        }return true;
    }
};