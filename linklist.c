#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node next;
};
int val
struct node* head=NULL;
void create(struct node* head){
    struct node* newnode,*ptr;
    do{
        
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&val);
        newnode->data=val;
        if(head==NULL){
            newnode->next=NULL;
            head= newnode;

        }
        else{
            ptr=head;
            while(ptr->next!=NULL)
            ptr=ptr->next;

            ptr->next=newnode;
            newnode->next=NULL;
        }
        scanf("%d",&val);
    }while (val!=-1);
    
    void display(struct node*head ){
        struct node* newnode,*ptr;
        ptr=head;
        while (ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
        
    }
    void insertbegin(struct node* head);
    {struct node* newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&val);
        newnode->data=val;
        head=newnode;

    }
    void insertmiddle(struct node *head){
        struct node* newnode,*ptr;
         newnode=(struct node*)malloc(sizeof(struct node));
            printf("enter value of new node :");
            scanf("%d",&val);
         int num;
         printf("enter value after which node has to be added");
         scanf("%d",&num);
         newnode->data=val;
         while (ptr->data!=NULL)
         {
             ptr=ptr->next;
         }
         newnode->next=ptr->next;
         ptr->next=newnode;
    
         

    }

}




int main(){

}