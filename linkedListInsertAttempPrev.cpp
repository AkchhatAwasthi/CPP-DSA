#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int value){
        data=value;
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
void ins(node* &head,int value,int pos){
    node* newnode=new node(value);
    node* lag=head;
    for(int i=2;i<pos && lag->next!=nullptr;i++){
        lag=lag->next;
    }
    newnode->next=lag->next;
    lag->next=newnode;

}
void display(node* head){
    node* temp=head->next;
    int i=2;
    while(temp!=nullptr){
        if(i%2==0){
            cout<<temp->data<<"->";
            temp=temp->next->next;
            
        }
        i++;
    }
    cout<<"nullptr";
}
int main(){
    node* head=nullptr;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    display(head);
    return 0;
}