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

void store_in_unordered_set(node *head){
    unordered_set <int> newSet ;
    node* ptr=head;
    while(ptr!=NULL){
        newSet.insert(ptr->data) ;
        ptr=ptr->next;
    }
    cout<<"ITEMS STORED IN UNORDERED SET ARE :\n";

    for(auto &i: newSet) {
cout << i << "  ";
}
}

int main(){
    cout<<"enter your linked list (ENTER -1 TO TERMINATE):\n";
    node* head1=addlist();
    cout<<"your list is :\n";
    display(head1);

    store_in_unordered_set(head1);




    return 0;
}