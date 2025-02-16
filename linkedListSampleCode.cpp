#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
    
    node (int val){
    data = val;
    next = NULL;

        
    }

};
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertatlast(node* &head,int val){
    node* n = new node(val);
    if(head == NULL)
    {
        head = n;
    return;
    }
    node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp ->next;
    }
    
    temp->next=n;
}
void insertinbetween(node* &head,int val,int pos){
    if(pos==1){
        insertathead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp = head;
    for(int i=0;i<pos;i++){
        if(temp=NULL){
            cout<<"position out of bound"<<endl;
            return;
        }
        temp=temp->next;
        if(temp==NULL){
            cout<<"position out of bound"<<endl;
            return;
        }
        n->next=temp->next;
        temp->next=n;
    }
    
}

void display(node* head){
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insertatlast(head,4);
    insertatlast(head,1);
    insertatlast(head,2);
    insertatlast(head,3);
    insertathead(head,5);
    // insertinbetween(head,6,3);
    display(head);
}