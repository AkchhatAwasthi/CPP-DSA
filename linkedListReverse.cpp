//this code will just print the linked list in reverse dosent change the linked list at all
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int value){
        data = value;
        next=nullptr;
    }
};
void insert(node* &head,int value){
    node* newnode=new node(value);
    if(head==nullptr){
        head=newnode;
    }else{
        node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display(node* head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse(node* head){
    if(head==nullptr){
        return;
    }
    reverse(head->next);
    cout<<head->data<<" ";
}
int main(){
    node* head=nullptr;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    display(head);
    reverse(head);
    return 0;
}