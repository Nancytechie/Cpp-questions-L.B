// Middle of Linked List
// odd-> right one
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this-> next = NULL;
    }
};
/*
int getlen(Node* head){
    int len = 0 ;
    while(head != NULL){
        len++;
        head = head->next;
    }
    return len;
}
Node* middle(Node* head){
    int len = getlen(head);
    Node* temp = head;
    int ans = len/2;
    int count = 0;
    while(count < ans){
        temp = temp->next;
        count++;
    }
    return temp;  
}

int main(){
    Node* head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(15);
    head->next->next->next = new Node(20);
    
    Node* mid = middle(head);
    cout << "Middle element: " << mid->data << endl;
    
    return 0;

}
*/

//OPTIMIZED APPROACH:
Node* middleel(Node*head){
    if(head==NULL || head->next== NULL){
        return NULL;
    }
    if(head->next->next == NULL){
        return head->next;
    }
    Node* slow= head;
    Node* fast = head->next;
    while(fast !=NULL){
        fast = fast->next;
        if(fast !=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
    
}
Node* midfin(Node* head){
    return middleel(head);

}
int main(){
    Node* head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(15);
    head->next->next->next = new Node(20);
    
    Node* mid = midfin(head);
    cout << "Middle element: " << mid->data << endl;
    
    return 0;

}

