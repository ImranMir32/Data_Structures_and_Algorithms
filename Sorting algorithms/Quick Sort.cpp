#include <bits/stdc++.h>
using namespace std;

// Partition the array and return the index of the pivot's final position
int partition(vector<int>&arr, int low, int high) {
    int pivot = arr[low]; // Choose the last element as the pivot
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j;
}

// Quick Sort function
void quickSort(vector<int>&arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Recursively sort the sub-arrays before and after the pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    cout << "Original array: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quickSort(arr,0,n-1);

    cout << "Sorted array: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
