#include<iostream>
using namespace std;
/*
    Variables: 
        -> Variables is a single alphabet or set of characters starting with a-z, A-Z or underscore used to assign any values or strings.
        -> Eg: int a = 6;  Here, int is a datatype.

    Datatypes:
        -> Different types of datatypes are:
            1. int     --- 4 bytes --- Used to store integer values         --- Eg: 1,3, -98...
            2. float   --- 4 bytes --- Used to store decimal values         --- Eg: 4.56, -9.45...
            3. char    --- 1 byte  --- Used to store characters             --- Eg: 'c', 'G', 's'...  
            4. double  --- 8 bytes --- Used to store long floating values   --- Eg: 4.875246875...  
            5. bool    --- 1 byte  --- Used to store 0 or 1 (false or true) --- Eg: int a = 6; int b = 8; a<b; returns 1...  

    Type Casting:
        -> Converting one datatype into another
*/
int main(){
    // Type casting
    float price = 36.876;
    int newPrice = (int)price;
    cout<<"New price is: "<<newPrice<<endl;

    // Operators
    int a;
    int b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Operators in C++"<<endl;
    //arithmetic operators
    cout<<"following are the arithmetic operators"<<endl;
    cout<<"a + b: "<<a + b<<endl;
    cout<<"a - b: "<<a - b<<endl; 
    cout<<"a * b: "<<a * b<<endl;
    cout<<"a / b: "<<a / b<<endl;
    cout<<"a % b: "<<a % b<<endl;
    cout<<"a++: "<<a++<<endl;
    cout<<"a--: "<<a--<<endl;
    cout<<"++a: "<<++a<<endl;
    cout<<"--a: "<<--a<<endl;
    cout<<endl;
    cout<<endl;

    //comparison operators
    cout<<"following are the comparison operators"<<endl;
    cout<<"a == b: "<<(a==b)<<endl;
    cout<<"a != b: "<<(a!=b)<<endl;
    cout<<"a >= b: "<<(a>=b)<<endl;
    cout<<"a <= b: "<<(a<=b)<<endl;
    cout<<"a > b: "<<(a<b)<<endl;
    cout<<"a < b: "<<(a>b)<<endl;
    cout<<endl;
    cout<<endl;

    //logical operators
    cout<<"following are the logical operators"<<endl;
    cout<<"logical and operator: "<<((a==b) && (a<b))<<endl;
    cout<<"logical or operator: "<<((a==b) || (a<b))<<endl;
    cout<<"logical not operator: "<<(!(a==b))<<endl;


    //Bitwise operators
    cout<<"following are the bitwise operators"<<endl;
    cout<<"Bitwise and operator: "<<(a & b)<<endl;
    cout<<"Bitwise or operator: "<<(a | b)<<endl;
    cout<<"Bitwise ex-or operator: "<<(a ^ b)<<endl;
    cout<<"Bitwise left shift operator: "<<(10<<2)<<endl;    // a * (2^b) = a<<b
    cout<<"Bitwise right shift operator: "<<(10>>1)<<endl;   // a / (2^b) = a>>b

    // Data type modifiers
    cout<<sizeof(int)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(long long int)<<endl;

    //Operator precedence
    int a = 9, b = 7;
    int c = (((a*8)+98)-b);  // multiplicatio ,division,remainder,addition,subtraction//
    cout<<c;                 //associativity is from right to left
    return 0;
}
