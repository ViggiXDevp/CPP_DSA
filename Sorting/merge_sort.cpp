#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}
void ms(vector<int>& arr, int low, int high){
    if(low == high) return;
    int mid = (low + high) / 2;
    ms(arr, low, mid);
    ms(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
vector<int> mergeSort(vector<int>& arr) {
    ms(arr, 0, arr.size()-1);
    return arr;
}


int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> sortedArr = mergeSort(arr);      // --> Time Complexity: O(n log n), Space Complexity: O(n)
    
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << sortedArr[i] << " ";
    }
    return 0;
}