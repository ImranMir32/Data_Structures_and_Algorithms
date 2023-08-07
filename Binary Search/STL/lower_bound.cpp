#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> sortedVec = {1, 3, 5, 7, 9, 11};
    int target = 6;
    auto it = lower_bound(sortedVec.begin(), sortedVec.end(), target);

    if (it != sortedVec.end()) {
        cout << "Lower bound of " << target << " is at index " << (it - sortedVec.begin()) << endl;
    } else {
        cout << "Value not found." << endl;
    }

    return 0;
}
