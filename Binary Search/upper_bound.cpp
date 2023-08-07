#include <bits/stdc++.h>
using namespace std;


int upperBound(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();

    while (left < right) {
        int mid = (left+right) / 2;
        if (arr[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left; // Index of the first element strictly greater than target
}

int main() {
    vector<int> sortedArray = {1, 3, 5, 7, 7, 9, 11, 13, 15, 17};
    int target = 7;
    
    int upperIdx = upperBound(sortedArray, target);
    cout << "Upper bound of " << target << " is at index " << upperIdx << endl;
    return 0;
}
