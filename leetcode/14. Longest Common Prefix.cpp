class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; 
        
        int numStrings = strs.size();
        int minLen = INT_MAX;

        for (const string& str : strs) {
            minLen = min(minLen, (int)str.length());
        }

        string prefix = "";
        for (int i = 0; i < minLen; ++i) {
            char currChar = strs[0][i]; 
            
            for (int j = 1; j < numStrings; ++j) {
                if (strs[j][i] != currChar) {
                    return prefix; 
                }
            }
            prefix += currChar; 
        }
        return prefix;
    }
};
