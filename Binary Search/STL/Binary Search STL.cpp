#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> sortedArray = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 11;

    bool result = binary_search(sortedArray.begin(), sortedArray.end(), target);

    if (result) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
