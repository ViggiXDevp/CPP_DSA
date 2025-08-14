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
Node * removeHead(Node* head){
    if(head == nullptr) return nullptr;
    if(head->next == nullptr) {
        delete head;
        return nullptr;  
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}
Node * removeTail(Node* head){
    if(head == nullptr) return nullptr;
    if(head->next == nullptr) {
        delete head;
        return nullptr;  
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newTail = temp->back;
    newTail->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}
Node * removeKthElement(Node* head, int k){
    if(head == nullptr) return nullptr;
    int count = 0;
    Node* kNode = head;
    while(kNode != nullptr){
        count++;
        if(count == k) break;
        kNode = kNode->next;
    }
    Node* prev = kNode->back;
    Node* front = kNode->next;
    if(prev == nullptr && front == nullptr) {
        return nullptr;
    } else if (prev == nullptr){
        return removeHead(head);
    } else if (front == nullptr){
        return removeTail(head);
    }
    prev->next = front;
    front->back = prev;
    kNode->next = nullptr;
    kNode->back = nullptr;
    delete kNode;
    return head;
}
void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;
    if(front == nullptr){
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }
    prev->next = front;
    front->back = prev;
    temp->next = temp->back = nullptr;
    free(temp);
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
    // head = removeHead(head);
    // head = removeTail(head);
    // head = removeKthElement(head, 2);
    deleteNode(head->next->next);
    print(head);
    return 0;
}