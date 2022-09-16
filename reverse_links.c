#include <stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* link;
};

struct node *head=NULL;
void display(){

    struct node*ptr= head;
    if(head==NULL){
        printf("LIST IS EMPTY\n");
    }
    else{
        while (ptr->link!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
        
    }
    
    printf("\n");
}
void rev_display(){

    struct node*ptr= head;
    if(head==NULL){
        printf("LIST IS EMPTY\n");
    }
    else{
        while (ptr->link!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
        
    }
    printf("%d",ptr->data);
    
    printf("\n");
}
void append(int n){
    struct node* temp,*ptr;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->link=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        while (ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp;
        
    }
}

void reverse(){
 struct node *prev=NULL;
 struct node*current=head;
 struct node* next;
  next=current->link;
  
 while (current->link!=NULL)
 {
    
     current->link=prev;
     prev=current;
     current=next;
      next=current->link;
 }
head=prev;
 

}


int main(){
    int val;
    printf("ENTER NUMBERS IN YOUR LINKED LIST (ENTER -1 TO TERMINATE )\n");
    do{
        scanf("%d",&val);
        append(val);
    }while(val!=-1);
    printf("YOUR LINKED LIST IS :\n");
    display();
    printf("LINKED LIST AFTER REVERSING :\n");
    reverse();
    rev_display();
    

    return 0;
    }