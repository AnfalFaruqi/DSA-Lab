#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};
void print_data(Node* head) {
    Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    // Creating 4 nodes
    Node node1, node2, node3, node4;
    
    node1.data = 10; node1.next = &node2; node1.prev = NULL;
    node2.data = 20; node2.next = &node3; node2.prev = &node1;
    node3.data = 30; node3.next = &node4; node3.prev = &node2;
    node4.data = 60; node4.next = NULL;  node4.prev = &node3;

    Node* head = &node1;
    
    cout << "Original doubly linked list: ";
    print_data(head);

    // Taking value and position from user
    int newvalue, position;
    cout << "Enter value to insert: ";
    cin >> newvalue;
    cout << "Enter position: ";
    cin >> position;

    // Counting the number of nodes
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    // Validate position (not start or end)
    if (position <= 1 || position >= count) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    // Finding the node before the insertion point
    Node* ptr = head;
    for (int i = 1; i < position - 1; i++) {
        ptr = ptr->next;
    }

    // Inserting the new node
    Node* new_node = new Node();
    new_node->data = newvalue;
    new_node->next = ptr->next;
    new_node->prev = ptr;
    ptr->next->prev = new_node;
    ptr->next = new_node;
 
    // Printing the updated doubly linked list
    cout << "Doubly linked list after insertion: ";
    print_data(head);
    return 0;
}

 
