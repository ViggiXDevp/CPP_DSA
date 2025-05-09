#include<iostream>
using namespace std;
// Function to calculate sum of n numbers
void sum(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout<<sum; 
}

// Function to calculate factorial of n
int Fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Function to calculate the sum of digits in given number
int sumofDigit(int num){
    int digSum = 0;
    while ( num > 0)
    {
        int lastdigit = num % 10;
        num /= 10;
        digSum += lastdigit;
    }
    return digSum;
}

// Function to calculate binomial coefficient
int nCrCoeff(int n, int r){
    int nFact = Fact(n);
    int rFact = Fact(r);
    int n_rFact = Fact(n-r);
    int Coeff = nFact/(rFact*n_rFact);
    return Coeff;
}

int main(){
    int n = 8 ;int r = 2;
    cout<< nCrCoeff(n, r)<<endl;

    int num = 1234;
    cout<<sumofDigit(num)<<endl;

    cout<<Fact(n)<<endl;

    sum();
    
    return 0;
}