class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); // Initialize stack with -1 to handle edge case

        int maxLen = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i); // Push the current index to mark the start of a new potential valid substring
                } else {
                    maxLen = max(maxLen, i - st.top()); // Update the maximum length
                }
            }
        }

        return maxLen;
    }
};