#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    // Precomputed Hashing for character frequency
    
    int hash[26] = {0}; // Hash table for 26 lowercase letters
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') { // Check if character is lowercase
            hash[s[i] - 'a']++; // Increment the count for the character
        }
    }

    // Output the frequency of each character
    int q;
    cout<<"Enter number of queries: ";
    cin>>q;
    while(q--) {
        char c;
        cout<<"Enter character to check frequency: ";
        cin>>c;
        if(c >= 'a' && c <= 'z') { // Check if character is lowercase
            cout<<hash[c - 'a']<<endl; // Output the frequency of the character
        } else {
            cout<<"Invalid Input"<<endl; // Handle invalid input
        }
    }
    return 0;
}