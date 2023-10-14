#include <iostream>
using  namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,x,sum1=0;
        cin>>n>>k>>x;
        
        if(n<k|| (k-x >1)){
            cout<<-1<<endl;
            continue;
        }
        else {
            for(int i=0;i<k;i++){
                sum1+=i;
            }
            if(k==x){
                  for(int i=k;i<n;i++){
                    sum1+=(x-1);
                        }
                    }   
            
            else{
              for(int i=k;i<n;i++){
                    sum1+=x;
              
            }
        }
        }
             cout<<sum1<<endl;
    }

    return 0;
}