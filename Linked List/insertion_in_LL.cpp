#include<iostream>
#include<vector>
using namespace std;
struct Node {
    int data;
    Node* next;
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
Node* insertHead(Node* head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    return temp;  
}
Node* insertTail(Node* head, int val){
    if(head == nullptr){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}
Node* insertPosition(Node* head, int k, int val){
    if(head == nullptr){
        if(k==1){
            return new Node(val);
        } else {
            return head; 
        }
    }
    if(k == 1){
        Node* newNode = new Node(val);
        newNode->next = head;
        return newNode;
    }
    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        count++;
        if(count == k-1){
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next; 
    }
    return head;
}
Node* insertBeforeValue(Node* head, int el, int val){
    if(head == nullptr){
        return nullptr;
    }
    if(head->data == val){
        Node* newNode = new Node(val);
        newNode->next = head;
        return newNode;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        if(temp->next->data == val){
            Node* newNode = new Node(el);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next; 
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
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrtoLL(arr);
    // head = insertHead(head, 50);
    // head = insertTail(head, 60);
    // head = insertPosition(head, 3, 70);
    head = insertBeforeValue(head, 100, 3);
    print(head);
    return 0;
}
