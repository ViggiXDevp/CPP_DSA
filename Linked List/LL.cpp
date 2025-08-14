#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node * next;  // the pointer to the next value

    Node(int data1, Node * next1){
        int data = data1;
        Node * next = next1;
    }
    
    Node(int data1){
        data = data1;
        next = nullptr;  // Initialize next as null since it's the end of the list
    }
};

Node* convertArrtoLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node * temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}

int checkIfPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr={2,5,8,7};
    Node* y= convertArrtoLL(arr);
    cout<<y<<'\n'; // returns the memory value
    cout<<y->data<<'\n'; // returns the data stored at that memory point

    // Converting array to linked list and Testing the head pointer
    Node* head = convertArrtoLL(arr);
    cout<<head->data<<endl;


    // Traversing the linked list to print all elements
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    //length of the linked list
    cout<< lengthOfLL(head) << endl;

    // Checking if a value is present in the linked list
    cout<< checkIfPresent(head, 5) << endl;
    return 0;
}