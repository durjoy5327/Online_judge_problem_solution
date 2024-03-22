#include <bits/stdc++.h>
using namespace std;

 int findMinArrowShots(vector<vector<int>>& p) {
     sort(p.begin(),p.end());
      vector<int> currentOverLab = p[0];
     int ans=1;
        for(int i=1;i<p.size();i++){
            int curS=p[i][0];
            int curE =p[i][1];
            if(currentOverLab[1]>=curS){
                currentOverLab[0]=max(currentOverLab[0],curS);
                currentOverLab[1]=min(currentOverLab[1],curE);
            }
            else{
                currentOverLab[0]=curS;
                currentOverLab[1]=curE;
                ans++;
            }
            
        }
        return ans;
    }


int main() {
   
   int n;
   cin>>n;
   vector<vector<int>> p(n, vector<int>(2));
   for(int i=0;i<n;i++){
       for(int j=0;j<2;j++){
           cin>>p[i][j];
       }
   }
  cout<< findMinArrowShots(p);
    return 0;
}
