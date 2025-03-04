// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node* insertNode(Node* head, int data) {
    if (head == NULL)
        head = createNode(data);
    else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = createNode(data);
    }
    return head;
}

Node* leftShiftLinkedList(Node* head, int k) {
    if(head==NULL || head->next==NULL || k==0){
        return head;
    }
    Node* temp=head;
    int count=1;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    
    if(k==0){
        return head;
    }
    temp->next=head;
    temp=head;
    for(int i=1;i<k;i++){
        temp=temp->next;
    }
    Node* newhead=temp->next;
    temp->next=NULL;
    return newhead;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int N, k;
    cin >> N;

    Node* head = NULL;
    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        head = insertNode(head, value);
    }

    cin >> k;

    head = leftShiftLinkedList(head, k);

    printList(head);

    return 0;
}