#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this-> data= data;
        this-> next = NULL;
    }
};
// Reverse Linked List function
Node* RLL(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr !=  NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original Array" << endl;
    Node* current = head;
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    head = RLL(head);

    cout << "After Reversing" << endl;
    current = head;
    while(current != NULL){
        cout << current-> data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;

}
/*
Approach 2: Recursion
void reverse(Node* &head , Node* prev , Node*curr){
    //base case
    if(curr == NULL){
        prev = head;
        return;
    }
    Node* forward = curr->next;
    reverse(head, forward , current);
    curr -> next = prev;
}

Node* RLL(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    reverse(head , curr , prev);
    return head;

}



*/