#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
 
 node* append(){
     node* head=NULL;
     int n;
     cin>>n;
     while(n!=-1){
         node *temp=new node();
         temp->data=n;
         temp->next=NULL;
         if(head==NULL)
         head=temp;
         else{
             node*ptr=head;
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
 int main(){
     cout<<"enter your 1st linked list:\n";
     node* head1=append();
     cout<<"1st  linked list is :\n";
     display(head1);
     cout<<"enter your 2nd linked list \n";
     node*head2=append();
     cout<<"2nd linked list is \n";
     display(head2);
     return 0;
 }

