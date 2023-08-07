#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left; // Index of the first element greater than or equal to target
}


int main() {
    vector<int> sortedArray = {1, 3, 5, 7, 7, 9, 11, 13, 15, 17};
    int target = 7;

    int lowerIdx = lowerBound(sortedArray, target);
    cout << "Lower bound of " << target << " is at index " << lowerIdx << endl;
    return 0;
}
