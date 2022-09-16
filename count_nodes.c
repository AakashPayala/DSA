//COUNT NO. OF NODES

#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;
};
struct node* head=NULL;
void display(){
    struct node* ptr;
    ptr=head;
    if(head==NULL){
        printf("LIST IS EMPTY\n");
    }
    else{
        while (ptr->next!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        
    }
}
void append(int n){
    struct node* temp, *ptr;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        
    }
}
void count(){
    struct node*ptr;
    int c=0;
    ptr=head;
    while(ptr->next!=NULL){
        c++;
        ptr=ptr->next;
    }
    printf("\nNUMBER OF NODES IN YOUR LINKED LIST =  %d ",c);
}

void main(){
    int n;
    printf("ENTER NUMBERS IN A LINKED LIST , (ENTER -1 TO TERMINATE):\n");
    do{
        scanf("%d",&n);
        append(n);

    }while(n!=-1);
    display();
    count();
}
