// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int value){
        data=value;
        next=nullptr;
    }
};
void insert(node* &head,int value){
    node* newnode=new node(value);
    newnode->next=head;
    head=newnode;
    
}
void input(node* &head,int value){
    node *newnode=new node(value);
    if(head==nullptr){
        head=newnode;
    }else{
        node *temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
            
        }
        temp->next=newnode;
    }
}
void display(node *head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int n,value;
    cin>>n;
    node *head=nullptr;
    for(int i=0;i<n;i++){
        cin>>value;
        insert(head,value);
    }
    int x;
    cin>>x;
    cout<<"Created Linked list: ";
    display(head);
    insert(head,x);
    cout<<"Final List: ";
    display(head);
    
    return 0;
}