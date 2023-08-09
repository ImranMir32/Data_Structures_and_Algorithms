#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&v, int n) {
    for (int i=0;i<n-1;i++) {
        // Last i elements are already in place, no need to check them again
        for (int j=0;j<n-i-1;j++) {
            if (v[j]>v[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    cout << "Original array: ";
    for(int i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    bubbleSort(v,n);

    cout << "Sorted array: ";
    for(int i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}
