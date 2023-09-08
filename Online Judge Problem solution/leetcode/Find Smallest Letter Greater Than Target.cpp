class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int x= target;
       for(auto u : letters){
           if(x< u ) return u;
       }
       return letters[0];
    }
};