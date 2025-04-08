#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void print_data(Node* head) {
    if (head==NULL) {
        cout<<"Doubly linked list is empty" << endl;
        return;
    }
    Node* ptr = head;
    while (ptr!=NULL) {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

Node* del_at_start(Node* head) {
    if (head == NULL) {
        cout << "The list is already empty, nothing to delete." << endl;
        return head;
    }
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    return head;
}

int main() {
    
    Node node1, node2, node3;

    node1.data=10;
    node1.next=&node2;
    node1.prev=NULL;

    node2.data=20;
    node2.next=&node3;
    node2.prev=&node1;

    node3.data=30;
    node3.next=NULL;
    node3.prev=&node2;

    Node* head = &node1;

    cout<<"Original Doubly Linked List: ";
    print_data(head);

    head = del_at_start(head);

    cout<<"Doubly Linked List after deletion: ";
    print_data(head);

    return 0;
}

