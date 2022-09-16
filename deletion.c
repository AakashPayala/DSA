//deletion

#include <stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node*head=NULL;


void append(int n){
struct node* temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=n;
temp->next=NULL;
if(head==NULL){
    head=temp;
}
else{
    ptr=head;
    while (ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}
}
void display(){
    struct node* ptr;
    ptr=head;
    while (ptr->next!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
    
}

void delete(int num){
    struct node *ptr,*previous;
    ptr=head;
    if(ptr->data==num)
    {
        head=head->next;
        ptr->next=NULL;
        free (ptr);

    }
    else{
    
    while(ptr->data!=num){
        previous=ptr;
      ptr=ptr->next;
    }
    previous->next=ptr->next;
    ptr->next=NULL;
    free(ptr);
    }
}




void main(){
      int val;
    printf("enter elements in a linked list , enter -1 to stop::\n");
  
    do{
        scanf("%d",&val);
        append(val);
    }while(val!=-1);
    printf(" linked list you entered is as follows ::\n");
    display();
   
    printf("\nenter value to be deleted from the linked list ::\n");
    int del;
    scanf("%d",&del);
    delete(del);
    printf("linked list after deletion of %d is :\n",del);
    display();

}