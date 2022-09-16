//middle node

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

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
void display(){
    struct node* ptr;
    ptr=head;
    while (ptr->next!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
    
}

void middle(){
    struct node *sp,*fp;
    sp=head;
    fp=sp->next;
    while(fp->next!=NULL){
        fp=fp->next->next;
        sp=sp->next;
    }
    printf("\n middle node = %d",sp->data);
}
 int main(){
    int n;
    printf("enter elements in linked list enter -1 to terminate:\n");
    
   do{
        scanf("%d",&n);
        append(n);
        
    } while (n!=-1);
    display();
    middle();  
    
    return 0;
}