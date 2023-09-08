class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s= to_string(num);
        int count=0,n;
        n= s.length();
        for(int i=0;i+k<=n;i++){
            string temp="";
            temp= s.substr(i,k);
            int con= stoi(temp);
            if(con>0&& num%con==0){
                count++;
            }
        }
        return count;
    }
};