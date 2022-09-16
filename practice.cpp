#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* addlist(){
    node*head=NULL;
    int val;
    cin>>val;
    while(val!=-1){
        node* temp=new node();
        temp->data=val;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
        }
        else{
            node* ptr= head;
            while(ptr->next!=NULL){
            ptr=ptr->next;
            }
            ptr->next=temp;
        }
        cin>>val;
        
    }
    return head;
}
void display(node* head){
    node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL\n";
}
node*  deletenode(node* head, int val){
    node*ptr=head;
    if(ptr->data==val){
        
        head=ptr->next;
        ptr->next=NULL;
        free(ptr);
    }
    else{
        node* temp=head;
        while(ptr->data!=val){
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=NULL;
        free(ptr);

    }
    return head;
}

node* add_begining(node* head,int n){
    node* temp=new node();
    temp->data=n;
    temp->next=head;
    head=temp;
    return(head);
}
node* add_at_end(node* head, int n){
    node* temp=new node(),*ptr=head;
    temp->data=n;
    temp->next=NULL;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;

    return head;
}

int main(){
    cout<<"enter your linked list :\n";
    node* head1=addlist();
    cout<<"your list is :\n";
    display(head1);
    cout<<"enter value to be deleted:\n";
    int n;
    cin>>n;
    node* head2= deletenode(head1,n);
    cout<<"linked list after deleting the element is:\n";
    display(head2);
    cout<<"enter element to be added at the begining:\n";
    int element_begin;
    cin>>element_begin;
    node* head3=add_begining(head2,element_begin);
    cout<<"linked list after adding element at the begning is:\n";
    display(head3);
    cout<<"enter element to be added at the end:\n";
    int endelement;
    cin>>endelement;
    node* head4=add_at_end(head3,endelement);
    cout<<"linked list after adding element at the end is:\n";
    display(head4);
    return 0;
}