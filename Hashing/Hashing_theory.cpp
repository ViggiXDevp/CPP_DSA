#include<iostream>
using namespace std;

// --> Hashing is used to store the frequency of elements in an array.
// --> The maximum memory can be allocated for hash table is 10^7 for integers and 10^8 for boolean values outside main function i.e;(globally).
int main(){
    int n;
    cout<<"Enter the number of elements in the array (0 to 11): ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // Precomputed Hashing
    int hash[12] = {0};      // The maximum memory can be allocated for hash table is 10^6 for integers and 10^7 for boolean values inside main function. (If exceeded -> Segmentation Fault)
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter number to check frequency: ";
        cin>>number;
        if(number < 0 || number > 11){
            cout<<"Invalid Input"<<endl;
        } else {
            cout<<hash[number]<<endl; // Output the frequency of number (Fetching from hash table)
        }
    }

    

    return 0;
}