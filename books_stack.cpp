#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*next;

};
node* top=NULL;
void place(int x){
    node*temp=new node();
    temp->data=x;
    temp->next=top;
    top=temp;
   
}
void remove(){
    node* ptr=top;
    if(top==NULL){
        cout<<"NO BOOKS LEFT\n";
    }
    cout<<"book removed : "<<ptr->data;
    cout<<"\n";
    top=ptr->next;
    free(ptr);
}
 void display(){
    struct node* ptr;
    ptr=top;
    if(top==NULL){
        cout<<"LIST IS EMPTY\n";
    }
    else{
        while (ptr!=NULL)                           
        {
            cout<<ptr->data;
            ptr=ptr->next;
        }
        
    }
}


int main(){
  
           cout<<"enter your books:\nenter -1 to stop:\n";
           int n;
           cin>>n;
           while (n!=-1)
           {
               place(n);
               cin>>n;
           }
           cout<<"enter no. of books to be removed\n";
           int r;
           cin>>r;
           while (r-->0)
           {
               remove();
           }
           
     
    return 0;
}