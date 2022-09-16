//INSERT ELEMENT AT ANY POSITION OF THE LIST


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
    temp->data = n;
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

void add_middle(int e, int v)
{
    struct node *ptr, *temp;
    ptr = head;
    while (ptr->data != v)
    {
        ptr = ptr->next;
    }
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=e;
    temp->next=ptr->next;
    ptr->next=temp;
}

void display()
{
    struct node *ptr;
    ptr = head;
    while (ptr->next != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void main()
{
    int n;
    printf("enter elements in linked list , enter -1 to stop :\n");
    do
    {
        scanf("%d", &n);
        append(n);
    } while (n != -1);

    printf("your linked list is ::\n");
    display();
    printf("enter element to be added and... value after which element has to be added::\n");
    int element, value;
    scanf("%d%d", &element, &value);
    
    printf("linked list after modification :\n");
    add_middle(element,value);
    display();
}