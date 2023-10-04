#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> numbers = {5, 2, 9, 1, 8, 3};

    // Use std::min_element to find the minimum value
    auto min_it = min_element(numbers.begin(), numbers.end());
    int min = *min_it;
    // Check if min_element found a valid minimum element
    cout<< min;
    return 0;
}