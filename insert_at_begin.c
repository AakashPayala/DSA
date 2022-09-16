//INSERT ELEMENT AT BEGINING OF THE LIST

#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;
};
struct node*head = NULL;
void display(){
    struct node* ptr;
    ptr=head;
    while (ptr->next!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    
}

void input_elements(int n){
    struct node* temp, *ptr;
    temp= (struct node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->next = NULL;
    if(head==NULL){
        head=temp;

    }
    else{
        ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        
    }
    

}
void add_begining(int newelement){
struct node* temp;
temp->data=newelement;
temp->next=head;
head=temp;
}


void main(){
    printf("enter elements in linked list , Enter -1 to treminate ::\n");
    int n;
    do{
        scanf("%d",&n);
        input_elements(n);
    }while(n!=-1);

    printf("The linked list you entered is :\n");
    display();
    printf("\nenter new element to be added at the begining :\n");
    int newelement;
    scanf("%d",&newelement);
    add_begining(newelement);
    printf("new list after adding element at the beginning is :\n");
    display();

}