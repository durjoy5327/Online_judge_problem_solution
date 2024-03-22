class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxIndex = -1;
        int n = arr.size();
        
        for (int i = 0; i < n - 1; i++) {
            if (i >= maxIndex) {
                maxIndex = i + 1;
                for (int j = i + 2; j < n; j++) {
                    if (arr[j] > arr[maxIndex]) {
                        maxIndex = j;
                    }
                }
            }
            arr[i] = arr[maxIndex];
        }
        
        arr[n - 1] = -1;
        
        return arr;
    }
};