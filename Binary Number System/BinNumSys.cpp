#include<iostream>
using namespace std;
int decToBin(int deciNum){
    int ans = 0, pow = 1;
    while (deciNum > 0)
    {
        int rem = deciNum % 2;
        deciNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
    
}

int binToDec(int binNum){
    int ans = 0, pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        binNum /= 10;

        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}
int main(){

    // Printing Decimal numbers from 0 to 10 in the Binary form
    for (int i = 0; i <= 10; i++)
    {
        cout<<decToBin(i)<<endl;
    }
    
    // Printing Binary numbers from 0 to 10 in the Decimal form
    for (int i = 0; i <= 10; i++)
    {
        cout<<binToDec(i)<<endl;
    }

    return 0;
}