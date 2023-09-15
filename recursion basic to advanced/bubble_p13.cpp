#include<bits/stdc++.h>
using namespace std;
int bubble(int arr,int r,int c){
    if(r==0) return;
    if(c<r){
       if(arr[c]>arr[c+1]){
        int temp;
        temp=arr[c];
        arr[c]=arr[c+1];
        arr[c+1]=temp;
         bubble(arr,r,c+1);
       }
    }
    else{
         cout<<endl;
    bubble(arr,r-1,0);
}
}
int main(){
    int arr[5]={2,5,1,6,7};
    int n=4;
    bubble(arr[],n,0);
    return 0;
}