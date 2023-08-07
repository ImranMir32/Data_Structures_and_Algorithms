#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        
        // int mid = left + (right - left) / 2; 
        int mid = (left + right) / 2;
        // Both approaches are correct and should yield the same result. 
        // The first approach, left + (right - left) / 2, is generally preferred 
        // because it reduces the chances of overflow.

        if (arr[mid] == target) {
            return mid; // Element found at index mid
        } else if (arr[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }

    return -1; // Element not found
}

int main() {
    vector<int> sortedArray = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 11;

    int result = binarySearch(sortedArray, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
