#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node * next;  // the pointer to the next value
    Node * back;  // the pointer to the previous value

    Node(int data1, Node * next1, Node * back1){
        data = data1;
        next = next1;
        back = back1;
    }
    
    Node(int data1){
        data = data1;
        next = nullptr;  // Initialize next as null since it's the end of the list
        back = nullptr;  // Initialize back as null since it's the beginning of the list
    }
};
Node* convertArrtoDLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node * temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;  // Link the current node to the next
        prev = prev->next;  // Move the prev pointer to the current node
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    vector<int> arr={2,5,8,7};
    Node* head= convertArrtoDLL(arr);
    print(head);
    return 0;
}
