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
Node* insertBeforeHead(Node* head, int val){
    Node* newNode = new Node(val, head, nullptr);
    head->back = newNode;
    return newNode;
}
Node* insertBeforeTail(Node* head, int val){
    if(head == nullptr){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}
Node* insertBeforeKthElement(Node* head, int k, int val){
    if(k == 1){
        return insertBeforeHead(head, val);
    }
    Node* temp = head;
    int count = 0;
    while(temp != nullptr){
        count++;
        if(count == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}
void insertBeforeNode(Node* node, int val){
    Node* prev = node->back;
    Node* newNode = new Node(val, node, prev);
    prev->next = newNode;
    node->back = newNode;
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
    // head = insertBeforeHead(head, 100);
    // head = insertBeforeTail(head, 69);
    // head = insertBeforeKthElement(head, 4, 42);
    insertBeforeNode(head->next->next, 40);
    print(head);
    return 0;
}
