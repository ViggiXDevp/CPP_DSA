#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age: ";
    cin>>age;

    //*********selection control structure--if--else if--else ladder*****


    if((age < 18) && (age > 0)){
       cout<<"You cannot come to my party"<<endl;
    } else if(age == 18){
       cout<<"You will get a kid pass"<<endl;
    } else if(age < 1){
       cout<<"You are not born yet"<<endl;
    } else{
       cout<<"You can come to the party"<<endl;
    }


    //*****************selection control structure---switch cases */
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 34:
        cout<<"You are 34"<<endl;
        break;                                          //---------break is very important!!!
    case 69:                                            //otherwise it will print all statements
        cout<<"You are 69"<<endl;
        break;
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with switch cases";

    //**************** Loops*************** 

    //for loop//
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
    }
    cout<<endl;

    //while loop//
    int x = 1;
    while (x <= 9)
    {
        cout<<x<<endl;
        x++;
    }
    cout<<endl;

    //do-while loop//
    int a = 1;
    do
    {
        cout<<a<<endl;
        a++;    
    } while (a <= 10);


    cout<<endl;
    cout<<endl;

    // ********Alternate way for (if else) statements*******
        //  Ternary Statement (syntax)
        //  condition ? statement 1 : statement 2;
        // Example:
            int n;
            cout<<"Enter your number: ";
            cin>>n;
            (n%2 == 0) ? cout<<"Even" : cout<<"Odd";


    // ******  Exercises..!!  *****

    // Exercise 1 
    int i = 1;
    do
    {
        cout<<"6 x "<<i<<" = "<<6*i<<endl;
        i++;
    } while (i <= 10);

    // Exercise 2
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase"<<endl;
    } else {
        cout<<"Uppercase"<<endl;
    }

    // Exercise 3
    int n;
    int sum = 0;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i = 1;
    while(i<=n){
        sum += i;
        i++;
    }
    cout<<"Sum is: "<<sum;

    // Exercise 4
    int n = 1;
    int fact = 1;
    for (int i = 1; i <=n; i++)
    {
        fact *= i;
    }
    cout<<fact;

    // Exercise 5
    int n = 5;
    int oddSum = 0;
    int i = 1;
    while(i<=n){
        if (i%2 != 0)
        {
            oddSum += i;
        }
        i++;
    }
    cout<<"Odd sum is: "<<oddSum;

    // Exercise 6
    int n = 5;
    int evenSum = 0;
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
            evenSum += i;
        }
    }
    cout<<"Even sum is: "<<evenSum;

    return 0;
}