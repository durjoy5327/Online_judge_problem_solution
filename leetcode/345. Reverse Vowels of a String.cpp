class Solution {
public:
    string reverseVowels(string s) {
     int f=0;
     int l=s.length()-1;
        while(f<=l){
            if((s[f]=='a'||s[f]=='e'||s[f]=='i'||s[f]=='o'||s[f]=='u'||s[f]=='A'||s[f]=='E'||s[f]=='I'||s[f]=='O'||s[f]=='U')&& (s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u'||s[l]=='A'||s[l]=='E'||s[l]=='I'||s[l]=='O'||s[l]=='U')){
                char temp=s[f];
                s[f]=s[l];
                s[l]=temp;
                f++;
                l--;
             }
         else if ((s[l] != 'a' && s[l] != 'e' && s[l] != 'i' && s[l] != 'o' && s[l] != 'u' && s[l] != 'A' && s[l] != 'E' && s[l] != 'I' && s[l] != 'O' && s[l] != 'U') && (s[f] == 'a' || s[f] == 'e' || s[f] == 'i' || s[f] == 'o' || s[f] == 'u' || s[f] == 'A' || s[f] == 'E' || s[f] == 'I' || s[f] == 'O' || s[f] == 'U')) {
    l--;
}


           else if((s[f] != 'a' && s[f] != 'e' && s[f] != 'i' && s[f] != 'o' && s[f] != 'u' && s[f] != 'A' && s[f] != 'E' && s[f] != 'I' && s[f] != 'O' && s[f] != 'U') && (s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u' || s[l] == 'A' || s[l] == 'E' || s[l] == 'I' || s[l] == 'O' || s[l] == 'U')) {
                  f++;
              }
             else{
                 f++;
                 l--;
             }
        } return s;
    }
};