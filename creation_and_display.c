//CREATION AND DISPLAY 

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head = NULL;

void append(int n)
{
    struct node *temp, *ptr;
    temp = (struct node*)malloc(sizeof(struct node));
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
void display(){
    struct node* ptr;
    ptr=head;
    while (ptr->next!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
    
}
 int main(){
    int n;
    printf("enter elements in linked list enter -1 to terminate:\n");
    
   do{
        scanf("%d",&n);
        append(n);
        
    } while (n!=-1);
    display();
   
    
    return 0;
}