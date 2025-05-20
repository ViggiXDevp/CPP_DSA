#include<iostream>
using namespace std;

// Exercise 1: Printing name n times
void name(int i, int n){
    if(i > n) return;
    cout<<"Vighnesh"<<endl;
    name(i+1, n);
}

// Exercise 2: Printing numbers from 1 to n linearly
void num(int i, int n){
    if(i > n) return;
    cout<<i<<" ";
    num(i+1, n);
}

// Exercise 3: Printing numbers from n to 1 linearly
void num_rev(int i, int n){
    if(i < 1) return;
    cout<<i<<" ";
    num_rev(i-1, n);
}

// Exercise 4: Printing numbers from 1 to n linearly with *BACK TRACKING* Approach
void num_(int i, int n){
    if(i < 1) return;
    num_(i-1, n);
    cout<<i<<" "; // Here, numbers will be started printing when it comes backward after meeting base condition.
}

// Exercise 5: Printing numbers from n to 1 linearly with *BACK TRACKING* Approach
void num_rev_(int i, int n){
    if(i > n) return;
    num_rev_(i+1, n);
    cout<<i<<" "; // Here, numbers will be started printing when it comes backward after meeting base condition.
}
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    name(1, n); // Q.1

    num(1, n); // Q.2

    num_rev(n, n); // Q.3

    num_(n, n); // Q.4

    num_rev_(1, n); // Q.5

    return 0;
}