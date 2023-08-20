#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,count =1,max=0;
    cin>> s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
         if(max<count)
         {
             max= count;
         }
    }
    cout<< max;
    
    return 0;
}