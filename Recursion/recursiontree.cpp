#include<iostream>
using namespace std;

void print(){   // Performs infinite recursion
    cout<<1;
    print();
}

int count = 0;
void printf(){
    if(count == 3) return;  // This is Base Condition which is necessary to avoid infinite recursion.
    cout<<count;
    count++;
    printf();
}

int main(){
    /* ** RECURSION ** : When a function calls ITSELF, until a specified CONDITION is met.
       -> If condition is not met, it turns to be a infinite recursion.     */

    print();    

    /*  ** STACK OVERFLOW ** 
        After printing numerous 1's, the recursion will stop due to Stack Overflow.
        -> Stack Overflow occurs when numerous function calls are waiting due to recursion (i.e; The functions which are called didn't terminated yet).
        -> The space which is used in memory to store function calls is called Stack Space.
    */

    printf();
    return 0;
}