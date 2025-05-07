#include<iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout<<"In function"<<endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
         if (arr[i] == target)  // TARGET FOUND
         {
             return i;  
         }
    }
    return -1;   // TARGET NOT FOUND
}

int reverseArray(int arr[], int size){
    int start = 0; int end = size -1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int sumAndProduct(int arr[], int size){
    int sum = 0, product = 1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout<<"Sum is "<<sum<<" and Product is "<<product<<endl;
}

int max_min_swap(int arr[], int size){
    int smallest = 0, largest = 0;   
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<arr[smallest])
        {
            smallest = i;
        }
        if (arr[i]>arr[largest])
        {
            largest = i;
        }
    }
    swap(arr[smallest], arr[largest]);
}

int main(){

    // .....Taking and elements in input and displaying in the form of array.....
    int size = 5;
    int marks[size];

    cout<<sizeof(marks)<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>marks[i];                      // 0 to size-1
    }
    for (int i = 0; i < size; i++)
    {
        cout<<marks[i]<<endl;
    }


    // .....Largest and Smallest element.....
    int nums [] = {12, -31, 9, 0, 64, -14};
    int size = 6;
    int index;
    int smallest = INT8_MAX;        // largest positive number (plus infinity)
    int largest = INT8_MIN;         // largest negative number (minus infinity)
    for (int i = 0; i < size; i++)
    {
        if (nums[i]<smallest)
        {
            smallest = nums[i];
            index = i;
        }
        // smallest = min(nums[i], smallest);         --->(You can use this statement also instead of using if statement)
    }
    cout<<"Smallest number is: "<<smallest<<" and its index is "<<index<<endl;
    for (int i = 0; i < size; i++)
    {
        if (nums[i]>largest)
        {
            largest = nums[i];
            index = i;
        }
    }
    cout<<"largest number is: "<<largest<<" and its index is "<<index<<endl;


    // .....Pass by reference.....
    int arr[] = {1, 2, 3};
    changeArr(arr, 3);                  // Here, after calling changeArr function changes will occur in main function.
    cout<<"In main"<<endl;
    for (int i = 0; i < 3; i++)         // So, instead of 1 2 3..., 2 4 6 will be printed.
    {
        cout<<arr[i]<<" ";
    }


    // .....Linear Search.....          -->Time Complexity of Linear Search is O(n)
    int arr[] = {1, 0, 2, 8, 0, 4};
    int size = 6;
    int target = 8;
    cout<<linearSearch(arr, size, target);
    

    // .....Reverse Array (2 pointer approach).....  -->Here also, Time Complexity is O(n)
    int arr[] = {1, 0, 2, 8, 0};
    int size = 5;
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    // .....Sum and Product of an Array.....
    int arr[] = {1, 9, 2, 8, 1, 4};
    int size = 6;
    sumAndProduct(arr, size);


    // .....Swaping of max and min elements in an array.....
    int arr[] = {1, 9, 2, 8, 1, 4};
    int size = 6;
    max_min_swap(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}