class Solution {
public:
  bool isSubstringPresent(string s) {
    string t = s;
    if (s.length() < 2)
        return false;
    reverse(t.begin(), t.end());
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < s.length(); j++) {
            if (i + 1 < s.length() && j + 1 < s.length() && s[i] == t[j] && s[i + 1] == t[j + 1]) {
                return true;
            }
        }
    }
    return false;
}
};