#include<bits/stdc++.h>
using namespace std;
struct node{
    
    char data;
    node* next;
};de* 
noappend(){
    node* head=NULL;    
    char n;
    cin>>n;
    while(n!='*'){
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
 void check_palindrome(node* head1,node*head2){
     node* ptr1=head1;
     node* ptr2= head2;
     int f=0;
     while(ptr1!=NULL){
         if(ptr1->data!=ptr2->data){
             f=1;
             break;
         }
         ptr1=ptr1->next;
         ptr2=ptr2->next;
     }
     if(f==1)
     cout<<"\nNOT PALINDROME\n";
     else
     cout<<"\nPALINDROME\n";
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
     check_palindrome(head1,head2);
     
     return 0;
 }
