#include<iostream>
#include<vector>
using namespace std;

void changeX(int *ptr){   // pass by reference using pointers
    *ptr = 20;
}

int main(){
    // => Pointer is a datatype which holds the address of the other datatypes.
    int a = 3;
    int * b = &a;
    // & ---> (Adress of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    // * ---> (Value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to Pointer
    int **c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;

    // ...NULL Pointer -> A Pointer that doesn't point to any location (Used in LinkedList and Trees)
    int ** ptr = NULL;
    cout<<ptr<<endl;     // returns 0
    cout<<*ptr<<endl;    // You can't dereference a null pointer (shows segmentation fault)

    // ...Pass by reference...using pointers
    int x = 10;
    changeX(&x);
    cout<<"Inside main function: "<<x<<endl;

    // ...Array Pointers...
    // -> Array Pointers are constant throughout the program (can't be assigned to any other value)
    int arr[] = {1, 2, 3, 4, 5};
    cout<<arr<<endl;        // Stores the address of arr[0]
    cout<<*arr<<endl;       // Stores the value of arr[0], i.e; 1

    // ...Pointer Arithmetic...
    int a = 10;
    int * ptr = &a;
    cout<<ptr<<endl;        // Stores the address of 'a'
    ptr++;
    cout<<ptr<<endl;        // Increases the memory by 4 Bytes (for int)...(in hexadecimal form)
    ptr--;
    cout<<ptr<<endl;        // Decreases the memory by 4 Bytes...
    
    ptr = ptr + 2;
    cout<<ptr<<endl;        // Adds 2 int, i.e; 2 * (4 bytes) = 8 bytes added to the memory
    ptr = ptr - 5;
    cout<<ptr<<endl;        // Subtracts 5 int, i.e; 5 * (4 bytes) = 20 bytes subtracted from the memory

    // -> You can even use relational operators to compare two pointers based on their addresses

    return 0;
}