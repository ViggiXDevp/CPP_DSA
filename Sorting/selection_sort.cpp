#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    // Selection Sort
    for(int i=0;i<=n-2;i++){
        int minIndex = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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

    selection_sort(arr, n);             // --> Time Complexity: O(n^2) for all best, average and worst cases.

    // Output the sorted array
    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}