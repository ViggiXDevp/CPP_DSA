#include<iostream>
using namespace std;
/*
--> A continuous sub-part or even a single element is referred to as sub array.
--> For eg: Take a array [1, 2, 3],
            -> The possible sub arrays are: 1, 2, 3, 12, 23 and 123.
            -> If there are 'n' elements in an array, then the number of sub arrays will be (n*(n+1))/2
*/
int main(){
    // .....Method to print all the sub arrays.....Time Complexity is O(n^3)
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++){
            for(int i = st; i <= end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    // .....Maximum Sub array Sum.....(Brute Force Approach).....Time Complexity is O(n^2)
    //  --> In brute force, the intial thought will be to find all the Possible sub-arrays, Find their sum and then find the maximum among them
    int n = 5;
    int arr[5] = {-11, 2, 3, 4, 5};
    int maxSum = INT8_MIN;
    for(int st = 0; st < n; st++){
        int currSum = 0;
        for(int end = st; end < n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout<<"Maximum sub array sum is: "<<maxSum<<endl;

    /*
        Another method to solve Maximum sub array sum is Kadane's Algorithm (LC No. 53),
        --> The basic intution is whenever, the currSum will be negative, those elements can't contribute to
            maximum sub array. So, in Kadane's Algorithm whenever, the currSum is negative the currSum will reset to 0.
        --> Time Complexity of Kadan's algorithm is O(n), which is most optimized approach.
    */
    return 0;
}