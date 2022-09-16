#include<bits/stdc++.h>
using namespace std;
 struct node{
     int data;
     node* next;
 };
 node *top=NULL;
 void push (int n){
     node* temp=new node();
     temp->data=n;
     temp->next=NULL;
     if(top==NULL){
         top=temp;
     }
     else{
         node* ptr=top;
         temp->next=ptr;
         top=temp;
     }

 }

 void pop(){
     node* ptr=top;
     top=ptr->next;
     free(ptr);
 }
 void display(){
    struct node* ptr;
    ptr=top;
    if(top==NULL){
        printf("LIST IS EMPTY\n");
    }
    else{
        while (ptr!=NULL)                           
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        
    }
}
int main(){
    cout<<"enter elements in stack, enter -1 to terminate:::\n";
    int n;
    cin>>n;
    while(n!=-1){
        push(n);
        cin>>n;
    }
    cout<<"elements of your stack:\n";
    display();
    cout<<"\n";

    cout<<"elements of stack after poping:\n";
    pop();
    
    display();
    
}