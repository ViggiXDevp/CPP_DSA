#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> & arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int>& arr, int low, int high){
    if(low < high){
        int pindex = partition(arr, low, high);
        qs(arr, low, pindex -1);
        qs(arr, pindex + 1, high);
    }
}
vector<int> quickSort(vector<int>& arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Quick sort implementation
    quickSort(arr);                     // --> Time Complexity: O(n log n) on average, O(n^2) in the worst case
    cout << "Sorted elements: ";        // --> Space Complexity: O(1) for the in-place sort
    for(int i = 0; i < n; i++){ 
        cout << arr[i] << " ";
    }
    return 0;
}