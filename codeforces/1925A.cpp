#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        while(n--){
             char c='a';
           for(int i=0;i<k;i++){
               s+=c;
               c++;
           }
        }
        cout<<s<<endl;
    }

    return 0;
}