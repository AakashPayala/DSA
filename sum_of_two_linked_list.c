#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *head2=NULL;
struct node *head3=NULL;

void append(int n)
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=n;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void append2(int n)
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=n;
    temp->next = NULL;
    if (head2 == NULL)
    {
        head2 = temp;
    }
    else
    {
        ptr = head2;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void display(struct node *head){
    struct node* ptr;
    ptr=head;
    while (ptr->next!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
    
}

 int main(){
    int n,no;
    printf("enter elements in 1st linked list enter -1 to terminate:\n");
    
   do{
        scanf("%d",&n);
        append(n);
        
    } while (n!=-1);
    printf("\n");
     printf("enter elements in 2nd linked list enter -1 to terminate:\n");
    
   do{
        scanf("%d",&no);
        append2(no);
        
    } while (no!=-1);
  
  printf("elements of 1st linked list =\n");
  display(head);
  printf("elements of 2nd linked list =\n");
  display(head2);
  printf("sum of two linked list : \n");
 merge(head,head2);
  display(head3);
   
    
    return 0;
}