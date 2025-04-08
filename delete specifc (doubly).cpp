#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void print_data(Node* head) {
    if (head==NULL) {
        cout<<"Doubly linked list is empty"<<endl;
        return;
    }
    Node* ptr = head;
    while (ptr!=NULL) {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

Node* delete_node_at_position(Node* head, int position) {
    if (head==NULL) {
        cout<<"The list is empty, nothing to delete."<<endl;
        return head;
    }
    
    Node* temp = head;
    int count=0;
    
    while (temp!=NULL) {
        count++;
        temp=temp->next;
    }

    
    if (position<1 || position>count) {
        cout<<"Invalid position!"<<endl;
        return head;
    }

    temp=head;

    if (position==1) {
        head = head->next;
        if (head!=NULL) {
            head->prev=NULL;
        }
        delete temp;
        return head;
    }

    for (int i=1 ; temp!=NULL && i<position ; i++) {
        temp = temp->next;
    }

    if (temp->next!=NULL) {
        temp->next->prev = temp->prev;
    } else {
        temp->prev->next = NULL;
    }
    
    if (temp->prev!=NULL) {
        temp->prev->next = temp->next;
    }

    delete temp;
    return head;
}

int main() {
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();

    node1->data=10;
    node1->next=node2;
    node1->prev=NULL;

    node2->data=20;
    node2->next=node3;
    node2->prev=node1;

    node3->data=30;
    node3->next=node4;
    node3->prev=node2;

    node4->data=40;
    node4->next=NULL;
    node4->prev=node3;

    Node* head = node1;

    cout<<"Original Doubly Linked List: ";
    print_data(head);

    int position;
    cout<<"Enter position to delete: ";
    cin>>position;
    head=delete_node_at_position(head, position);

    cout<<"Doubly Linked List after deletion: ";
    print_data(head);

    return 0;
}

