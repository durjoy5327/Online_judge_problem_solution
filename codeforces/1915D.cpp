#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        string s, result;
        cin >> s;
        for(int i=0;i<n;i++){
            if(s[i]=='b'||s[i]=='c'||s[i]=='d'){
                result+=s[i];
            }
            else{
                result+=s[i];
                if((s[i+2]!='a'&&s[i+2]!='e')&&(s[i+1]=='b'||s[i+1]=='c'||s[i+1]=='d')){
                    result+=s[i+1];
                    i++;
                }
                if(i!=n-1){
                    result+='.';
                }
            }
        }
        cout<<result<<endl;
    }

    return 0;
}