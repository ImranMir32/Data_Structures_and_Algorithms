#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr, int n) {
    for(int i=0;i<n-1;i++) {
        // Find the index of the minimum element in the unsorted part
        int minIndex = i;
        for(int j=i+1;j<n;j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex=j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
   int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    cout<<"Original array: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selectionSort(arr, n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
