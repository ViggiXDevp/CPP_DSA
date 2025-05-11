#include<iostream>
#include<vector>
using namespace std;

// Vectors are dynamic in nature (won't have fixed size. It can vary after declaration also).

/* .....Static vs Dynamic Allocation.....
Static:-
    --> In Static, memory is allocated during compile time.    
    --> Allocated in Stack memory.
    --> Eg: Arrays
Dynamic:-
    --> In Dynamic, memory is allocated during run time i.e; it can resize it's memory.    
    --> Allocated in Heap memory.
    --> Eg: Vectors
*/

void linearSearch(int n){
    vector <int> vec={1,2,3,4,5,6,7,84,5,6,98,154,6};
    bool search = false;
    int index = -1;
    for(int val : vec){
        index++;
        if(val == n){
            search = true;
            break;
        }
    }
    if(search){
        cout<<n<<" is present in vector at index "<<index<<endl;
    }else{
        cout<<n<<" is absent in vector"<<endl;
    }
}

void reverseOfVector(){
    vector <int> vec={1,2,3,4,5,6,7,8,9,10};
    int start = 0;
    int end = vec.size()-1;
    for(int i=0 ; i<vec.size() ; i++){
        while(start<end){
            swap(vec[start], vec[end]);
            start++;
            end--;
        }
    }
    for(int val : vec){
        cout<<val<<" ";
    }
}
int main(){
    
    vector<int> vec1(4,0);
    for(int val: vec1){      
        cout<<val<<endl;    // Displays 0 for 4 times...
    }

    vector <int> vec = {1, 2, 3};
    cout<<vec[0]<<endl;                             // To access an element of vector, You can use vec[i],
    cout<<vec.at(0)<<endl;                          //        or use function as vec.at(i)
    cout<<"Size is: "<<vec.size()<<endl;
    vec.push_back(4);                               // Add element at the last
    cout<<"Size is: "<<vec.size()<<endl;
    vec.pop_back();                                 // Removes element at the last
    cout<<"Size is: "<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;                     // Capacity of the vector
    cout<<"Front value is "<<vec.front()<<endl;     // Gives first value
    cout<<"Back value is "<<vec.back()<<endl;       // Gives last value
    for(int val: vec){      // For each loop
        cout<<val<<endl;    // Here, iterator val does not stores the index but the value of every index.
    }

    linearSearch(1);
    reverseOfVector();
    
    return 0;
}
