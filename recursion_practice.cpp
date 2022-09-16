#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* take_input(){
    node* head=NULL;
    int n;
    cin>>n;
    while (n!=-1)
    {
         node*temp=new node();
      temp->data=n;
      temp->next=NULL;
      if(head==NULL){
          head=temp;
      }
      else{
          node *ptr=head;
          while(ptr->next!=NULL){
              ptr=ptr->next;
          }
          ptr->next=temp;
      }
      cin>>n;
    }
    return head;
}

void display(node * head){
    node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    cout<<" NULL\n";

}
    int main(){
        node*head1;
        cout<<"enter nos. on your 1st linked list enter -1 to terminate :\n";
        head1=take_input();
        cout<<"elements of your first linked are :\n";
        display(head1);
          return 0;

    }
    

