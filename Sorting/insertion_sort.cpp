#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    // Insertion Sort
    for(int i=0; i<=n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    insertion_sort(arr, n);             // --> Time Complexity: O(n) for best case (when the array is already sorted) and O(n^2) for average and worst case.
    
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}