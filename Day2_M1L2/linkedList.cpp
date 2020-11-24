#include <iostream>
using namespace std;


struct Node {
        int Val;
        Node *nextPtr;
};
Node *head = nullptr;



void Add2tail(Node *&head, const int &inVal){ //&inVal means the address of the value, not a copy of the value
    // Generates the head (if empty)
    Node *curr = head , *nextNode;
    if (head == nullptr){
        head = new Node;
        head->Val = inVal;
        head->nextPtr = nullptr;
        return;
    }
    // Finds the tail
    while (curr->nextPtr != nullptr){
    //nextNode = curr->nextPtr;
    //curr = nextNode;
    curr = curr->nextPtr;
    }
    
    // Adds to the tail
    Node *tail = new Node; // Defines new tail
    curr->nextPtr = tail;
    tail->Val = inVal;
    tail->nextPtr = nullptr;
};

void PrintList(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        std::cout << temp->Val << std::endl;    
        temp = temp->nextPtr;
    } 
};

void deleteLL(Node *head) {
    Node *temp = head,*temp2;

    while (temp != nullptr) { 
        temp2 = temp->nextPtr;
        delete temp;
        temp = temp2;
    } 
}

Node *removeFromFront(Node *head) {
    Node *newHead = nullptr;
    if (head != nullptr) {
        newHead = head->nextPtr;
        delete head;
    }
    return newHead;   
}
//---------------------------------------------------------
int main() {
    std::cout << "Please enter a positive value to be added to the tail, stop when the value is zero" << std::endl;   
    int inVal;
    cin >> inVal;

    while (inVal > 0){
        Add2tail(head, inVal);
        cin >> inVal; 
    };

    std::cout << "The list with new tail:" << std::endl;   
    PrintList(head);
    
    head = removeFromFront(head);
    std::cout << "---------------------" << std::endl;   
    std::cout << "The list with deleted head:" << std::endl;   
    PrintList(head);
    deleteLL(head);
}