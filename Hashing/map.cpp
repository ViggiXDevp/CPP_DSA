#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Precomputed Hashing using map
    map<int, int> hash;                 // --> Time Complexity is O(log n) for both storing and fetching elements. (Best, Average and Worst Case)
    for(int i = 0; i < n; i++){
        hash[arr[i]]++; 
    }
    
    // --> You can use unordered_map instead of map. In unordered_map the elements won't follow specific order.
    // --> Time Complexity for both storing and fetching elements is O(1) on best and average case, and O(n) in worst case (rarely occurs).
    // --> In unordered_map, worst case occurs because of hash collisions.
    
    for(auto it : hash){
        cout << "Element: " << it.first << ", Frequency: " << it.second << endl;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter number to check frequency: ";
        cin >> number;

        // fetching the frequency from the hash map
        cout << hash[number] << endl;
    }
    return 0;
}