class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m= g.size();
      int n= s.size();
        int s1=0;
        int e=0,count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(s1<m&&e<n){
            if(g[s1]<=s[e]){
                count++;
                s1++;
            }
            e++;
        }
        return count;
    }
};