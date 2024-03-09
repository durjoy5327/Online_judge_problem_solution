class Solution {
public:
    
    unordered_map<char , int>symbols{ {'[',-1}, {'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
    bool isValid(string s) {
        stack<char>st;
        for(char ch: s){
            if(symbols[ch]<0){
                st.push(ch);
            }
            else{
                if(st.empty())  return 0;
                char top= st.top();
                if(symbols[top]+symbols[ch]!=0) return 0;
                st.pop();
            }
        }
        if(st.empty()) return 1;
        else return 0;
    }
};