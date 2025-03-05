#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to insert a node at the end of the list
void insert(node* &head, int value) {
    node* newnode = new node(value);
    if (head == nullptr) {
        head = newnode;
    } else {
        node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

// Function to insert a node in a sorted position in the list
void insertdata(node* &head, int value) {
    node *newnode = new node(value);
    
    // Special case: insert at the beginning
    if (head == nullptr || head->data >= newnode->data) {
        newnode->next = head;
        head = newnode;
        return;  // Added return to prevent further processing
    }

    node* temp = head;
    // Traverse to the correct position for the new node
    while (temp->next != nullptr && temp->next->data < newnode->data) {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

// Function to print the linked list
void printList(node* head) {
    node *temp = head;
    while (temp != nullptr) {  // Print all nodes until nullptr
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = nullptr;
    int n, data;

    // Read the number of elements
    cin >> n;

    // Insert 'n' elements into the list
    for (int i = 0; i < n; i++) {
        cin >> data;
        insert(head, data);
    }

    // Read the new value to be inserted in sorted order
    cin >> data;
    insertdata(head, data);

    // Print the updated list
    printList(head);

    return 0;
}
