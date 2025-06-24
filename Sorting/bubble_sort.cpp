#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    // Bubble Sort
    for(int i=n-1; i>=1; i--){
        int didSwap = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){       // If no elements were swapped, the array is already sorted
            break;              // --> Time Complexity: O(n) for best case (when the array is already sorted) and O(n^2) for average and worst case.
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    // Output the sorted array
    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}