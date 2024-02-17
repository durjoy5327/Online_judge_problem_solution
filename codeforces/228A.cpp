#include <bits/stdc++.h>
#include <map>
#include <vector>

using namespace std;

int main() {
    vector<int> arr;

    for (int i = 0; i < 4; i++) {
        int num;
        cin >> num;
        arr.push_back(num);  
    }

 sort(arr.begin(), arr.end());
 int count=0;
 for(int i=0;i<arr.size();i++){
     if(arr[i]==arr[i+1]){
         count++;
     }
 }

    cout << count << endl;

    return 0;
}