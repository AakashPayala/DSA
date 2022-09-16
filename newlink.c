#include <stdio.h>
#include <stdlib.h>

void display(struct node *ptr);
struct node
{
    int data;
    struct node *next;
};
struct node *head;


void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void create(){
    printf("enter elements in linked list enter -1 to terminate");
    struct node*  newnode, ptr;
    do{
        newnode=(struct node*)malloc(sizeof(struct node));
        int  val;
        scanf("%d",&val);
        newnode->data=val;
        if(head==NULL){
            newnode->next=NULL;
            head=newnode;

        }
        else{
            ptr = head;
            while(ptr->next!=NULL){
                ptr=ptr->next;

            }
            ptr->next=newnode;
            newnode->next=NULL;

        }
        scanf("%d",&val);

    } while(val!=-1);
}
int main()
{
    create();
    display(head);
    
    
    return 0;
}
