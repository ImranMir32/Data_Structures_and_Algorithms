#include <bits/stdc++.h>
using namespace std;


void insertionSort(vector<int>&arr, int n) {
    for(int i=1;i<n;i++) {
        int temp=arr[i];
        int j=i-1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while(j>=0 && arr[j]>temp) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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

    insertionSort(arr,n);

    cout << "Sorted array: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
