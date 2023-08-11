#include <bits/stdc++.h>
using namespace std;

bool hasDuplicate(const vector<int>& nums) {
    int n = nums.size();
    vector<bool> visited(n, false);

    for (int num : nums) {
        if (visited[num]) {
            return true;
        }
        visited[num] = true;
    }

    return false;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    if (hasDuplicate(nums)) {
        cout<<"The array contains duplicates."<<endl;
    } else {
        cout<<"The array does not contain duplicates."<<endl;
    }
    return 0;
}
