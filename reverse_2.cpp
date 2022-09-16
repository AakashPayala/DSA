#include<bits/stdc++.h>
using namespace std;
struct node{
    
    int data;
    node* next;
};
node* append(){
    node* head=NULL;    
    int n;
    cin>>n;
    while(n!=-1){
        node* temp=new node();
        temp->data=n;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
        }
        else{
            node* ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=temp;

        }
        cin>>n;
    }
    return head;

}
 void display(node* head){
    node* ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    cout<<"NULL\n";
 }

 node* reverse(node* head){
     node* prev=NULL;
     node* current=head;
     node*nextlink;
     while(current!=NULL){
        nextlink=current->next;
        current->next=prev;
        prev=current;
        current=nextlink;
         
         
     }
      head=prev;
      return head;
 }
 
 

 int main(){
     cout<<"enter your  linked list:\n";
     node* head1=append();
     cout<<"1st  linked list before reversing :\n";
     display(head1);
     cout<<"linked list after reversing\n";
     node* head2=reverse(head1);
     display(head2);
     
     return 0;
 }
